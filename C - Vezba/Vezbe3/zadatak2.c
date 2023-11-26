#include <stdio.h>
#define MAX_NIZ 30

int main(){

    int A[MAX_NIZ], n, br;

    do{
        printf("Unesite maksimalan broj elemenata : ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_NIZ);
    
    for(int i = 0; i<n; i++){
        printf("niz[%d] = ", i);
        scanf("%d", &A[i]);
    }

    int max_element = A[0];

    for(int i = 0; i<n; i++){
        if(max_element < A[i]){
            max_element = A[i];
        }
    }

    printf("Max element niza je : %d", max_element);

    return 0;
}