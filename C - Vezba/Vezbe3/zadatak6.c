#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 100

void reverseString (char *str){
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}


int main(){

    char str1[MAX_STRING];

    printf("Unesite neki string : \n");
    fgets(str1, sizeof(str1), stdin);

    reverseString(str1);
    puts(str1);

    return 0;
}