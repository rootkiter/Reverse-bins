/*
 * ==========================================================
 *
 *       Filename:  getpidtest.c
 *         Author:  rootkiter
 *         E-Mail:  rootkiter@rootkiter.com
 *        Created:  11/22/2016 05:45:30 PM
 *
 * ==========================================================
 */

#include <stdio.h>

int main(){
    unsigned int mpid;
    mpid=getpid();
    printf("pid = %u\n",mpid);
    return 0;
}

