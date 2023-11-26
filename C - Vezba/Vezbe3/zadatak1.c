#include <stdio.h>
#include "bubbleSort.c"
#define MAX_NIZ 30

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
    print("\n");

    printf("Unesite neki ceo broj : ");
    scanf("%d", &br);

    for(int i = 0; i<n; i++){
        if(A[i] == br){
            broj_ponavlajnja++;
        }
    }

    printf("\nUkupno ponavljanje %d u nizu je %d puta", br, broj_ponavlajnja);

    return 0;
}