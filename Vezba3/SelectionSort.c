// Selection Sort algoritam

#include <stdio.h>
#include <stdlib.h>
 
#define MAX_ELEMENT 30

int main(){

    int n, br;
    int niz[MAX_ELEMENT];

    do{
    printf("Unesite duzinu niza : ");
    scanf("%d",&n);
    }while(n <= 0 || n > MAX_ELEMENT);

    for(int i = 0; i< n; i++){
        printf("\n[%d] = ",i + 1);
        scanf("%d", &niz[i]);
    }

    int j, min_idx, temp;
    for(int i = 0; i<n; i++){
        min_idx = i;
        for(j = i + 1; j < n; j++){
            if(niz[min_idx] > niz[j]){
                min_idx = j;
            }
        }
        temp = niz[i];
        niz[i] = niz[min_idx];
        niz[min_idx] = temp;
    }

    for(int i = 0; i< n; i++){
        printf("\nniz[%d] = %d", i+1, niz[i]);
    }
    
    

    return 0;
}