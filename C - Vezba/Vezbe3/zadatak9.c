#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 100


void transformLetters(char *str){
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while(start < end){
        if(str[start] >= 65 && str[start] <= 90)
            str[start] += 32;
        else if(str[start] >= 97 && str[start] <= 122)
            str[start] -= 32;
        start++;
    }
}


int main(){

    char str1[MAX_STRING];

    printf("Unesite neki string : \n");
    fgets(str1, sizeof(str1), stdin);

    transformLetters(str1);
    puts(str1);
    
    return 0;
}