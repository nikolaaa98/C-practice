#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_STRING 101

int main(){

    char str1[MAX_STRING], str2[MAX_STRING];

    printf("Unesite prvi string : ");
    scanf("%s", str1);
    //__fpurge(stdin);

    printf("Unesite drugi string : ");
    fgets(str2, MAX_STRING, stdin);

    int duzina_str2 = strlen(str2);

    if(duzina_str2 < MAX_STRING - 1)
        str2[duzina_str2 - 1] = '\0';

    printf("\n%s\n", str1);
    printf("\n%s\n", str2);

    puts(str1);
    puts(str2);


    return 0;
}