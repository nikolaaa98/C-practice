// Dat je niz od maksimalno 20 realnih elemenata. Učitati n elemenata, a zatim naći maksimalnu vrednost.

#include <stdio.h>
#define MAX_ELEMENT 20

int main(){

    int niz[MAX_ELEMENT];
    int n, max_value = niz[0];

    do{
        printf("\nUnesite duzinu niza : ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_ELEMENT);
    
    for(int i = 0; i< n; i++){
        printf("\n[%d] = ", i+1);
        scanf("%d", &niz[i]);
    }

    for(int i = 0; i< n; i++){
        if(max_value < niz[i]){
            max_value = niz[i];
        }
    }

    printf("\nMax element niza je : %d", max_value);

    return 0;
}
