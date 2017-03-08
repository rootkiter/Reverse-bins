/*
 * ==========================================================
 *
 *       Filename:  array.c
 *         Author:  rootkiter
 *         E-Mail:  rootkiter@rootkiter.com
 *        Created:  03/08/2017 03:32:40 PM
 *
 * ==========================================================
 */

#include <stdio.h>

#define MAX_LEN 128

void init_int_table(int* table,int maxlen){
    int i=0;
    for(i=0;i<maxlen;i++){
        table[i] = i;
    }
}

int getAt_int_table(int * table,int maxlen,int i){
    return table[i];
}

void init_chr_table(char* table,int maxlen){
    int i=0;
    for(i=0;i<maxlen;i++){
        table[i] = i;
    }
}

char getAt_chr_table(char * table,int maxlen,int i){
    return table[i];
}

int main(){
    int int_table[MAX_LEN];
    char chr_table[MAX_LEN];
    
    init_int_table(int_table,MAX_LEN);
    printf("%d\n",getAt_int_table(int_table,MAX_LEN,20));

    init_chr_table(chr_table,MAX_LEN);
    printf("%c\n",getAt_chr_table(chr_table,MAX_LEN,0x41));
    return 0;
}
