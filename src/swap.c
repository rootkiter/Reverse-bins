/*
 * ==========================================================
 *
 *       Filename:  swap.c
 *         Author:  rootkiter
 *         E-Mail:  rootkiter@rootkiter.com
 *        Created:  11/17/2016 03:54:01 PM
 *
 * ==========================================================
 */

#include <stdio.h>

void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("[swap2] , a=%d , b=%d , c=%d", *a,*b,c);
}

int main(){
    int a,b;
    printf ("Please input the number (a b):\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 1;
}

