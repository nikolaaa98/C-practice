/*
     Proveri da li je string palindrom

*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){

    int duzina, i;
    char str1[200], *str2; // Pretpostavimo da string nece biti duzi od 200
    printf("Unesite string : \n");
    scanf("%s", str1);
    duzina = strlen(str1);
    str2 = (char*)malloc(duzina+1);
    for(i = 0; i< duzina; i++){
        str2[i] = str1[duzina - i-1];
    }
    str2[duzina] = 0;
    
    if (strcasecmp(str1,str2) != 0 ) 
        printf("\nRec nije palindrom!");
    else
        printf("\nRec jeste palindrom!");
    

    return 0;
}