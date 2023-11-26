#include <stdio.h>

int main(){

    int N, M;
    double posao;

    printf("Unesite koliko dugo treba jednom radniku da uradi posao : ");
    scanf("%d", &N);
    printf("Unesite koliko dugo treba drugom radniku da uradi posao : ");
    scanf("%d", &M);
    posao = ((double)N + (double)M)/2;
    printf("Ako rade zajedno mogu uraditi posao za %lf dana ", posao);

    return 0;
}