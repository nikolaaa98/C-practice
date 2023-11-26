#include <stdio.h>
#include "bubbleSort.c"
#include <stdlib.h>
#include <math.h>
#define MAX_NIZ 25

int main(){

    int A[MAX_NIZ], n, br, broj_ponavlajnja = 0;
    int B[MAX_NIZ], X[MAX_NIZ];

    do{
        printf("Unesite maksimalan broj elemenata : ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_NIZ);
    
    for(int i = 0; i<n; i++){
        printf("niz[%d] = ", i);
        scanf("%d", &A[i]);
    }

    int pom = 0;
    int pom2 = 0;

    for(int i = 0; i<n; i++){
       for(int j = 0; j<n-i-1; j++){
            if(A[i] < 0){
                pom = A[i];
                B[j] = pom;
            }
            if(A[i] %2 == 0){
                pom2 = A[i];
                X[j] = pom2;
            }
        }
    }

    printArray(B, n);
    printf("\n");
    printArray(X, n);

    return 0;
}