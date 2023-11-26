#include <stdio.h>
#include "bubbleSort.c"
#include <stdlib.h>
#include <math.h>
#define MAX_NIZ 20

int main(){

    int A[MAX_NIZ], n, br, broj_ponavlajnja = 0;

    do{
        printf("Unesite maksimalan broj elemenata : ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_NIZ);
    
    for(int i = 0; i<n; i++){
        printf("niz[%d] = ", i);
        scanf("%d", &A[i]);
    }
    
    bubbleSort(A, n);
    printArray(A, n);
    printf("\n");

    int suma = 0;
    int srednja_vrednost = 0;

    for(int i = 0; i < n; i++){
        suma += A[i];
    }
    
    srednja_vrednost = suma/n;
    int razlika = abs(A[0] - srednja_vrednost);
    int broj_elemnta_u_nizu = 0;
    
    for(int i = 0; i < n; i++){
        if(razlika < abs(A[i] - srednja_vrednost)){
            razlika = abs(A[i] - srednja_vrednost);
            broj_elemnta_u_nizu = i;
        }
    }

    printf("Element u nizu %d je najblizi srednjoj vrednosti niza %d sa razlikom %d", A[broj_elemnta_u_nizu], srednja_vrednost, razlika);
    return 0;
}