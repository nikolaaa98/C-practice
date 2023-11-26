#include <stdio.h>

int main() {

    int n;
    printf("Unesite broj n : ");
    scanf("%d", &n);
    int suma = 0;

    for(int i = 0; i<n; i++)
    suma += i;

    printf("Suma prvih %d broja je %d", n, suma);
    return 0;
}