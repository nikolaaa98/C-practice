#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 100

int getNumberOfCharacher(char *str, char character){
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    int numberOfCharacters = 0;

    while(start < end){
        if(str[start] == character){
            numberOfCharacters++;
        }
        start++;
    }   

    return numberOfCharacters; 
}

int main(){

    char str1[MAX_STRING];

    printf("Unesite neki string : \n");
    fgets(str1, sizeof(str1), stdin);

    char character;

    printf("Unesite neki karakter : \n");
    scanf("%c", &character);

    printf("%c character is written %d times in string", character, getNumberOfCharacher(str1, character));

    return 0;
}

