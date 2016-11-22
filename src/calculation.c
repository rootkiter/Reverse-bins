/*
 * ==========================================================
 *
 *       Filename:  calculation.c
 *         Author:  rootkiter
 *         E-Mail:  rootkiter@rootkiter.com
 *        Created:  11/16/2016 10:53:02 AM
 *
 * ==========================================================
 */

#include <stdio.h>

int main(){
    int a;
    printf("Please input the value of a:");
    scanf("%d",&a);
    printf("a * 9 + 5 = %d\n",(a * 9 + 5));
    printf("a * 2 * 2 = %d\n",(a * 2 * 2));
    printf("a % 4 + 2 = %d\n",(a % 4 + 2));
    printf("a % 9 + 2 = %d\n",(a % 9 + 2));
    return 0;
}

