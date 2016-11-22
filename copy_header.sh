#!/bin/bash
###############################################
# File Name : copy.sh
#    Author : rootkiter
#    E-mail : rootkiter@rootkiter.com
#   Created : 2016-11-22 18:57:51
###############################################

CPU="armv4eb armv4l armv4tl armv5l armv6l i486 i586 i686 m68k mips64 mipsel mips powerpc-440fp powerpc sh4 sparc x86_64 sh2eb"

for cc in $CPU
do
    normal=~/etc/xcompile/$cc/include/asm/unistd.h
    let flag=0

    if [ -f ~/etc/xcompile/$cc/include/asm/unistd_64.h ];then
        cp ~/etc/xcompile/$cc/include/asm/unistd_64.h  ./"$cc"_unistd_64.h
        let flag=1
    fi
    if [ -f ~/etc/xcompile/$cc/include/asm/unistd_32.h ];then
        cp ~/etc/xcompile/$cc/include/asm/unistd_32.h  ./"$cc"_unistd_32.h
        let flag=1
    fi
    if [ 0 -eq $flag ];then
        cp $normal ./"$cc"_unistd.h
    fi
done
