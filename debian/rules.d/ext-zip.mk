ext_PACKAGES    += zip
zip_DESCRIPTION := Zip
zip_EXTENSIONS  := zip
zip_config = \
	--enable-zip=shared
export zip_EXTENSIONS
export zip_DESCRIPTION
