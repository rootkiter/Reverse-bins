/*
 * ==========================================================
 *
 *       Filename:  timelib.c
 *         Author:  rootkiter
 *         E-Mail:  rootkiter@rootkiter.com
 *        Created:  12/09/2016 10:33:16 AM
 *
 * ==========================================================
 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int a=time(0);
    printf(" a = 0x%x , sizeof(a)=%d",a,sizeof(a));
    
    time_t b = a;
    struct tm * timeinfo;
    timeinfo = localtime(&b);
    char buffer[40];

    strftime(buffer,30,"%y-%m-%d %H:%M:%S.",timeinfo);

    puts(buffer);
    return 0;
}
