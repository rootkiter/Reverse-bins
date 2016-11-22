#!/bin/bash
###############################################
# File Name : build.sh
#    Author : rootkiter
#    E-mail : rootkiter@rootkiter.com
#   Created : 2016-11-18 12:36:26
###############################################

TARGET="calculation ifcode swap getpidtest"
CPU="armv4eb armv4l armv4tl armv5l armv6l i486 i586 i686 m68k mips64 mipsel mips powerpc-440fp powerpc sh4 sparc x86_64 sh2eb"

for tt in $TARGET
do
    for cc in $CPU
    do
        make TCPU=$cc $tt
        make TCPU=$cc TTDIR=static STATICFLAG=-static $tt
        make TCPU=$cc TTDIR=static_strip STATICFLAG=-static STRIPFLAG=-s $tt
    done
done
