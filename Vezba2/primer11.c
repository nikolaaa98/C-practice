/*
    Realizovati množenje i deljenje pomoću sabiranja i oduzimanja
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;
    int suma = 0;
    printf("Ünesite broj a : ");
    scanf("%d",&a);
    printf("Unesite broj b : ");
    scanf("%d",&b);
    for(int i = 1; i<=b; i++){
        suma += a;
    }
    printf("Suma = %d", suma);
    return 0;
}