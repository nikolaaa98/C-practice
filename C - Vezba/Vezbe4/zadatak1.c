#include <stdio.h>
#include <stdlib.h>

#define MAX_NIZ 30

void unos_niza(int *, int *);
void ispis_niza(int *, int);
int suma_elemenata (int *, int);
int srednja_vrednost (int *, int);
int maksimum (int *, int);
int minimum (int *, int);


int main(){

    int niz[MAX_NIZ], n;

    unos_niza(niz, &n);
    printf("Suma svih elemenata je %d\n", suma_elemenata(niz, n));
    printf("Srednja vrednost elemenata je %d\n", srednja_vrednost(niz, n));
    printf("Maksimalan element niza je : %d\n", maksimum(niz, n));
    printf("Minimalan element niza je : %d\n", minimum(niz, n));
    ispis_niza(niz, n);

    return 0;
}

int maksimum(int *niz, int n){
    int max = niz[0];
    for(int i = 0; i<n; i++){
        if(max < niz[i]){
            max = niz[i];
        }
    }
    return max;
}

int minimum(int *niz, int n){
    int min = niz[0];
    for(int i = 0; i<n; i++){
        if(min > niz[i]){
            min = niz[i];
        }
    }
    return min;
}


int srednja_vrednost(int *niz, int n){
    return suma_elemenata(niz, n)/n;
}

int suma_elemenata(int *niz, int n){
    int suma = 0;
    for(int i = 0; i<n; i++){
        suma += niz[i];
    }
    return suma;
}

void unos_niza(int *niz, int *n){
    do{
        printf("Unesite broj clanova niza : ");
        scanf("%d", n);
    }while(*n <= 0 || *n > MAX_NIZ);

    for(int i = 0; i < *n; i++){
        printf("niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }
}

void ispis_niza(int *niz, int n){
    printf("\n---------------------\n");
    for(int i = 0; i<n; i++){
        printf("niz[%d] = %d\n", i, niz[i]);
    }
}