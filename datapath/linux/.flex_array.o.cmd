cmd_/home/zrd/openvswitch-2.5.0/datapath/linux/flex_array.o := gcc -Wp,-MD,/home/zrd/openvswitch-2.5.0/datapath/linux/.flex_array.o.d  -nostdinc -isystem /usr/lib/gcc/i686-linux-gnu/5/include -I/home/zrd/openvswitch-2.5.0/include -I/home/zrd/openvswitch-2.5.0/datapath/linux/compat -I/home/zrd/openvswitch-2.5.0/datapath/linux/compat/include  -I./arch/x86/include -Iarch/x86/include/generated/uapi -Iarch/x86/include/generated  -Iinclude -I./arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -Iubuntu/include  -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -m32 -msoft-float -mregparm=3 -freg-struct-return -fno-pic -mpreferred-stack-boundary=2 -march=i686 -mtune=generic -maccumulate-outgoing-args -Wa,-mtune=generic32 -ffreestanding -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fno-delete-null-pointer-checks -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO -DVERSION=\"2.5.0\" -I/home/zrd/openvswitch-2.5.0/datapath/linux/.. -I/home/zrd/openvswitch-2.5.0/datapath/linux/.. -g -include /home/zrd/openvswitch-2.5.0/datapath/linux/kcompat.h  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(flex_array)"  -D"KBUILD_MODNAME=KBUILD_STR(openvswitch)" -c -o /home/zrd/openvswitch-2.5.0/datapath/linux/.tmp_flex_array.o /home/zrd/openvswitch-2.5.0/datapath/linux/flex_array.c

source_/home/zrd/openvswitch-2.5.0/datapath/linux/flex_array.o := /home/zrd/openvswitch-2.5.0/datapath/linux/flex_array.c

deps_/home/zrd/openvswitch-2.5.0/datapath/linux/flex_array.o := \
  /home/zrd/openvswitch-2.5.0/datapath/linux/kcompat.h \
  include/generated/uapi/linux/version.h \

/home/zrd/openvswitch-2.5.0/datapath/linux/flex_array.o: $(deps_/home/zrd/openvswitch-2.5.0/datapath/linux/flex_array.o)

$(deps_/home/zrd/openvswitch-2.5.0/datapath/linux/flex_array.o):
