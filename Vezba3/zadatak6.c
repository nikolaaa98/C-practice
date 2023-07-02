/*
    Napisati program koja modifikuje string tako što njegova mala slova transformiše u velika i obrnuto.
    • Znakove koji nisu slova program ne treba da obrađuje, već ih ostavlja takve kakvi su
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 31

int main(){

    char string[MAX_STRING];

    printf("Unesite neki string : ");
    gets(string);

    printf("\nString izgleda ovako : ");
    printf("\n%s", string);

    for(char i = 0; i<= string[i]; i++){
        if(string[i] >= 65 && string[i] <= 90)
            string[i] = string[i] + 32;
        else if(string[i] >= 97 && string[i] <= 122)
            string[i] = string[i] - 32;
    }
    printf("------------------------------------");
    printf("\nString izgleda ovako : ");
    printf("\n%s", string);

    return 0;
}