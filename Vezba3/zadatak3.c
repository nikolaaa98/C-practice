/*
    Napisati program koji pronalazi prvi element niza koji je najbliži srednjoj
    vrednosti niza celih brojeva. Niz može da ima najviše 20 elemenata.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 20

int main(){

    int niz[MAX_ELEMENT];
    int n;

    do{
        printf("\nUnesite duzinu niza : ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_ELEMENT);


    for(int i = 0; i< n; i++){
        printf("\n[%d] = ", i+1);
        scanf("%d", &niz[i]);
    }
    
    int srednja_vrednost;
    int suma = 0;
    int element_niza = niz[0];

    for(int i = 0; i<n; i++){
        suma += 0;
    }

    srednja_vrednost = (float)suma/(float)n;

    for(int i = 0; i<n; i++){
        if(srednja_vrednost == niz[i]){
            element_niza = niz[i];
        }
    }

    printf("%d Element niza je najblizi srednjoj vrednosti koja je %d", element_niza, srednja_vrednost);

    return 0;
}