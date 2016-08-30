# Compiling

## Updating to a new Debian version

```bash
cd php  # assumes you already cloned the repo
git remote add debian git://anonscm.debian.org/pkg-php/php-defaults.git
git fetch debian
git checkout pristine-tar && git merge debian/pristine-tar  # to make sure you have the new source tarball during compile
git checkout hypernode-7.0
git merge debian/master-7.0  # merge in newest release and resolve conflicts
```

## Create cowbuilder environments

```bash
apt-get install git-buildpackage debhelper build-essential quilt cowbuilder
export DIST=precise
export ARCH=amd64
git-pbuilder create  --extrapackages wget --mirror http://nl.archive.ubuntu.com/ubuntu/ --components="main universe" --debootstrapopts "--keyring=/usr/share/keyrings/ubuntu-archive-keyring.gpg"
rsync -av something.h:/etc/apt/ /var/cache/pbuilder/base-$DIST-$ARCH.cow/etc/apt/
```
If you rsynced from a php7.0 node also add the php55 repo. If you rsynced
from a php55 node, also add the php7.0 repo.
```
# edit /var/cache/pbuilder/base-precise-amd64.cow/etc/apt/sources.list.d/ubuntu_byte_nl.list
deb http://ubuntu.byte.nl precise php7.0
deb http://ubuntu.byte.nl precise php55
```

Remove multiarch if it exist and update
```
sudo rm /var/cache/pbuilder/base-$DIST-$ARCH.cow/etc/dpkg/dpkg.cfg.d/multiarch
git-pbuilder update
```


## Compiling the software

```bash
git clone git@github.com:ByteInternet/php.git
cd php
git checkout hypernode-7.0
gbp buildpackage --git-pbuilder --git-dist=precise --git-arch=amd64 --git-debian-branch=hypernode-7.0 -us -sa
```


# Changes to the Debian package to support Precise 12.04

1. Precise carries a slightly older version of libedit2 (2.11-20080614-3 instead of 2.11-20080614-4).
1. There is no upstart for Precise, so remove all references to it in the `control` and `rules` files.
1. Precise carries much older libzip and libpcre3 packages. Switch to PHP-builtin libraries instead.
