/*
    Napisati program koji od korisnika traži da unese tri celobrojne vrednosti,
    na osnovu kojih će se izračunati, a zatim ispisati njihova aritmetička,
    harmonijska, geometrijska i kvadratna sredina.
    • Formule za tražene sredine slobodno potražiti na Internetu
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int a, b, c;
    printf("Unesite broj a : ");
    scanf("%d", &a);
    printf("Unesite broj b : ");
    scanf("%d", &b);
    printf("Unesite broj c : ");
    scanf("%d", &c);

    float aritmeticka = ((float)a + (float)b + (float)c)/3;
    float harmonijska = 3/(1/(float)a + 1/(float)b + 1/(float)c);
    float kvadratna = sqrt( ( (float)a*(float)a + (float)b*(float)b + (float)c*(float)c ) /3);

    printf("Artimetricka : %f\nHarmonijska : %f\nKvadratna : %f", aritmeticka, harmonijska, kvadratna);

    return 0;
}