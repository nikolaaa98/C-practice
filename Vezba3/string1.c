#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 101

int main(){

    char str1[MAX_STRING], str2[MAX_STRING];
    printf("Unesite prvi string : ");
    scanf("%s", str1);
    __fpurge(stdin); // ako se citaju jos neki podaci bice odbaceni ako su na cekanju

    printf("Unesite drugi string : ");
    fgets(str2, MAX_STRING, stdin); // stdin - uredaj sa koga se preuzima ulaz u sistem, tastatura
    int duzina_str2 = strlen(duzina_str2);
    if(duzina_str2 < MAX_STRING - 1)
        str2[duzina_str2 - 1] = '\0'; // svaki string se zavrsava ovim karakterom

    printf("\n%s\n", str1); // koristi se za pisanje linije stringa u izlazni tok.
    printf("%s\n\n", str2);

    puts(str1);
    puts(str2);

    return 0;
}
