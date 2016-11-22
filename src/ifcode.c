/*
 * ==========================================================
 *
 *       Filename:  ifcode.c
 *         Author:  rootkiter
 *         E-Mail:  rootkiter@rootkiter.com
 *        Created:  11/17/2016 10:20:51 AM
 *
 * ==========================================================
 */

#include <stdio.h>

int iffun(int num){
    int a;
    a = num ;
    if ( a == 1 ){
        printf("[iffun:] a == 1.\n");
    }
    else if( a == 2 ){
        printf("[iffun:] a == 2.\n");
    }
    else if( a == 3 ){
        printf("[iffun:] a == 3.\n");
    }
    else{
        printf("[iffun:] a == ?.\n");
    }
    return 1;
}

int switchfun(int num){
    int a = num ;
    switch( a ){
        case 1:
            printf("[ switch: ] a == 1.\n");
            break;
        case 2:
            printf("[ switch: ] a == 2.\n");
            break;
        case 3:
            printf("[ switch: ] a == 3.\n");
            break;
        default:
            printf("[ switch: ] a == ?.\n");
            break;
    }
    return 1;
}

int main(){
    int number;
    printf("Please input a number:");
    scanf("%d",&number);
    iffun(number);
    switchfun(number);
    return 0;
}
