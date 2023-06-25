/*
    Zadatak 4
    Jedan radnik određeni posao uradi za M dana, a drugi radnik isti posao
    uradi za N dana. Napisati program kojim se određuje za koliko dana bi taj
    posao bio završen ako bi radili zajedno. Vrednosti M i N se unose sa
    tastature.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float M, N;
    printf("Unesite koliko dana je potrebno radniku da odradi posao : ");
    scanf("%f", &N);
    printf("Unesite koliko dana je potrebno drugom radniku da odradi posao ");
    scanf("%f", &M);
    float broj_dana = N - M;
    broj_dana = abs(broj_dana);
    printf("Potreban broj dana kada bi radili zajedno je : %f", broj_dana);

    return 0;
}