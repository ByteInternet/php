#include "php.h"
#include "php_ini.h"

#define PHP_REGISTRY_KEY              "SOFTWARE\\PHP"

#define PHP_VER1(V1)                  #V1
#define PHP_VER2(V1,V2)               #V1"."#V2
#define PHP_VER3(V1,V2,V3)            #V1"."#V2"."#V3

#define PHP_REGISTRY_KEYV(VER)        PHP_REGISTRY_KEY"\\"VER
#define PHP_REGISTRY_KEY1(V1)         PHP_REGISTRY_KEY"\\"PHP_VER1(V1)
#define PHP_REGISTRY_KEY2(V1,V2)      PHP_REGISTRY_KEY"\\"PHP_VER2(V1,V2)
#define PHP_REGISTRY_KEY3(V1,V2,V3)   PHP_REGISTRY_KEY"\\"PHP_VER3(V1,V2,V3)

static const char* registry_keys[] = {
	PHP_REGISTRY_KEYV(PHP_VERSION),
	PHP_REGISTRY_KEY3(PHP_MAJOR_VERSION, PHP_MINOR_VERSION, PHP_RELEASE_VERSION),
	PHP_REGISTRY_KEY2(PHP_MAJOR_VERSION, PHP_MINOR_VERSION),
	PHP_REGISTRY_KEY1(PHP_MAJOR_VERSION),
	PHP_REGISTRY_KEY,
	NULL
};

static int OpenPhpRegistryKey(char* sub_key, HKEY *hKey)
{
	const char **key_name = registry_keys;

	if (sub_key) {
		int main_key_len;
		int sub_key_len = strlen(sub_key);
		char *reg_key;

		while (*key_name) {
			LONG ret;

			main_key_len = strlen(*key_name);
			reg_key = emalloc(main_key_len + sub_key_len + 1);
			memcpy(reg_key, *key_name, main_key_len);
			memcpy(reg_key + main_key_len, sub_key, sub_key_len + 1);			
			ret = RegOpenKeyEx(HKEY_LOCAL_MACHINE, reg_key, 0, KEY_READ, hKey);
			efree(reg_key);
			
			if (ret == ERROR_SUCCESS) {
				return 1;
			}
			++key_name;
		}
	} else {
		while (*key_name) {
			if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, *key_name, 0, KEY_READ, hKey) == ERROR_SUCCESS) {
				return 1;
			}
			++key_name;
		}
	}
	return 0;
}

void UpdateIniFromRegistry(char *path TSRMLS_DC)
{
	char *p, *orig_path;
	HKEY MainKey;
	char *strtok_buf = NULL;

	if (!OpenPhpRegistryKey("\\Per Directory Values", &MainKey)) {
		return;
	}

	orig_path = path = estrdup(path);

	/* Get rid of C:, if exists */
	p = strchr(path, ':');
	if (p) {
		*p = path[0];	/* replace the colon with the drive letter */
		path = p;		/* make path point to the drive letter */
	} else {
		if (path[0] != '\\' && path[0] != '/') {
			char tmp_buf[MAXPATHLEN], *cwd;
			char drive_letter;

			/* get current working directory and prepend it to the path */
			if (!VCWD_GETCWD(tmp_buf, MAXPATHLEN)) {
				efree(orig_path);
				return;
			}
			cwd = strchr(tmp_buf, ':');
			if (!cwd) {
				drive_letter = 'C';
				cwd = tmp_buf;
			} else {
				drive_letter = tmp_buf[0];
				cwd++;
			}
			while (*cwd == '\\' || *cwd == '/') {
				cwd++;
			}
			path = (char *) emalloc(2+strlen(cwd)+1+strlen(orig_path)+1);
			sprintf(path, "%c\\%s\\%s", drive_letter, cwd, orig_path);
			efree(orig_path);
			orig_path = path;
		}
	}


	path = p = php_strtok_r(path, "\\/", &strtok_buf);

	while (p) {
		HKEY hKey;
		DWORD lType;
		DWORD values = 0, max_name = 0, max_value = 0, i = 0;
		
		if (p>path) {
			*(p-1) = '\\'; /* restore the slash */
		}

		if (RegOpenKeyEx(MainKey, path, 0, KEY_READ, &hKey)!=ERROR_SUCCESS) {
			break;
		}

		if(RegQueryInfoKey(hKey, NULL, NULL, NULL, NULL, NULL, NULL, &values, &max_name, &max_value, NULL, NULL) == ERROR_SUCCESS) {
			LPTSTR namebuf = (LPTSTR)emalloc(max_name + 1);
			PBYTE valuebuf = (PBYTE)emalloc(max_value);

			while (i < values) {
				DWORD namebuf_len  = max_name + 1;
				DWORD valuebuf_len = max_value;

				RegEnumValue(hKey, i, namebuf, &namebuf_len, NULL, &lType, valuebuf, &valuebuf_len);

				if ((lType == REG_SZ) || (lType == REG_EXPAND_SZ)) {
					/* valuebuf_len includes trailing 0 */
					zend_alter_ini_entry(namebuf, namebuf_len + 1, valuebuf, valuebuf_len?valuebuf_len-1:0, PHP_INI_SYSTEM, PHP_INI_STAGE_ACTIVATE);
				}

				i++;
			}

			efree(namebuf);
			efree(valuebuf);
		}

		RegCloseKey(hKey);
		p = php_strtok_r(NULL, "\\/", &strtok_buf);
	}
	RegCloseKey(MainKey);
	efree(orig_path);
}

#define PHPRC_REGISTRY_NAME "IniFilePath"

char *GetIniPathFromRegistry()
{
	char *reg_location = NULL;
	HKEY hKey;
	
	if (OpenPhpRegistryKey(NULL, &hKey)) {
		DWORD buflen = MAXPATHLEN;
		reg_location = emalloc(MAXPATHLEN+1);
		if(RegQueryValueEx(hKey, PHPRC_REGISTRY_NAME, 0, NULL, reg_location, &buflen) != ERROR_SUCCESS) {
			efree(reg_location);
			reg_location = NULL;
			return reg_location;
		}
		RegCloseKey(hKey);
	}
	return reg_location;
}
