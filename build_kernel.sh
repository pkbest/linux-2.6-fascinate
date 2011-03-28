#!/bin/bash

WORK=`pwd`
cd ..

if [ ! -d arm-2009q3 ]; then
	tarball="arm-2009q3-67-arm-none-linux-gnueabi-i686-pc-linux-gnu.tar.bz2"
	if [ ! -f "$tarball" ]; then
		wget http://www.codesourcery.com/public/gnu_toolchain/arm-none-linux-gnueabi/"$tarball"
	fi
	tar -xjf "$tarball"
fi

if [ ! -d fascinate_initramfs ]; then
	git clone git://github.com/jt1134/fascinate_initramfs.git
	cd fascinate_initramfs
	git checkout --track -b EB16 origin/EB16
	cd ..
fi

if [ ! -d lagfix ]; then
	git clone git://github.com/project-voodoo/lagfix.git
fi

if [ ! -d cwm_voodoo ]; then
	git clone git://github.com/jt1134/cwm_voodoo.git
fi

if [ ! -f lagfix/stages_builder/stages/stage1.tar ] || \
	[ ! -f lagfix/stages_builder/stages/stage2.tar.lzma ] || \
	[ ! -f lagfix/stages_builder/stages/stage3-sound.tar.lzma ]; then
	cd lagfix/stages_builder
	rm -f stages/stage*
	./scripts/download_precompiled_stages.sh
	cd ../../
fi

rm -rf fascinate_voodoo5
./lagfix/voodoo_injector/generate_voodoo_initramfs.sh \
	-s fascinate_initramfs \
	-d fascinate_voodoo5 \
	-p lagfix/voodoo_initramfs_parts \
	-t lagfix/stages_builder/stages \
	-c cwm_voodoo \
	-u -w

cd $WORK
rm -f kernel_update.zip
make clean mrproper
make ARCH=arm jt1134_defconfig
make -j8 CROSS_COMPILE=../arm-2009q3/bin/arm-none-linux-gnueabi- \
	ARCH=arm HOSTCFLAGS="-g -O3"

cp -p arch/arm/boot/zImage update/kernel_update
cd update
zip -r -q kernel_update.zip . 
mv kernel_update.zip ../

