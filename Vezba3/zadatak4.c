/*
    Dat je niz X od maksimalno 25 celobrojnih elemenata. Učitati n elemenata
    u niz X i formirati nizove A i B, pri čemu su elementi niza A parni, a
    elementi niza B negativni elementi niza X. Ispisati nizove X, A i B.
*/

#include <stdio.h>
#define MAX_ELEMENT 25

int main(){

    int niz[MAX_ELEMENT];
    int A[MAX_ELEMENT], B[MAX_ELEMENT];
    int n;

    do{
        printf("\nUnesite duzinu niza : ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_ELEMENT);


    for(int i = 0; i< n; i++){
        printf("\n[%d] = ", i+1);
        scanf("%d", &niz[i]);
    }

    int br1 = 0, br2 = 0;

    for(int i = 0; i<n; i++){
        if(niz[i]%2 == 0){
            A[br1] = niz[i];
            br1++;
        }

        if(niz[i] < 0){
            B[br2] = niz[i];
            br2++;
        }
    }

    for(int i = 0; i<br1; i++){
        printf("\nA[%d] = %d", i+1, A[i]);
    }
    printf("\n-------------------------");
    for(int i = 0; i<br2; i++){
        printf("\nB[%d] = %d", i+1, B[i]);
    }

    return 0;
}