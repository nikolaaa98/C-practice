/*
    Zadatak 5
    Napisati program koji prihvata broj dana kao celobrojnu vrednost i na
    osnovu nje izračunava ukupan broj godina, meseci i dana. Uzeti da
    godina ima isključivo 365, a mesec 30 dana.
*/

#include <stdio.h>

int main(){

    int celobrojna_vrednost;
    printf("Unesite neku celobrojnu_vrednost : " );
    scanf("%d", &celobrojna_vrednost);

    int godina = celobrojna_vrednost/365;
    int mesec = ((celobrojna_vrednost - godina*365))/30;
    int dani = (celobrojna_vrednost - godina*365) - 30*mesec;

    printf("Celobrojna vrednost : %d\nBroj godina : %d\nBroj meseci : %d\nBroj dana : %d", celobrojna_vrednost, godina, mesec, dani);

    return 0;
}