#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 100

bool isPalindrom(char *str){

    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while(start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;  
}


int main(){

    char str1[MAX_STRING];

    printf("Unesite neki string : \n");
    fgets(str1, sizeof(str1), stdin);

    if(isPalindrom(str1)){
        printf("Jeste palindrom");
    }
    else {
        printf("Nije palindrom");
    }

    return 0;
}