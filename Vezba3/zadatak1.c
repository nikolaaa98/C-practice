/*
    Dat je niz A od maksimalno 30 celobrojnih elemenata. Učitati n
    elemenata, zatim učitati ceo broj br. Na standardnom izlazu ispisati broj
    pojavljivanja br u nizu A.
    • Primer:
        • A = [2, 5, 6, 2, 8, 9, 2]
        • br = 2
*/


#include <stdio.h>
#include <stdlib.h>
 
#define MAX_ELEMENT 30 // define pretprocesorska direktiva Koristi se kako bi se izbeglo pisanje konstantnih vrednosti

int main(){

    int n, br;
    int niz[MAX_ELEMENT];

    do{
    printf("Unesite duzinu niza : ");
    scanf("%d",&n);
    }while(n <= 0 || n > MAX_ELEMENT);

    for(int i = 0; i<= n; i++){
        printf("\n[%d] = ",i + 1);
        scanf("%d", &niz[i]);
    }

    printf("\nUnesite neki ceo broj : ");
    scanf("%d", &br);

    int brojac = 0;

    for(int i = 0; i<= n; i++){
        if(br == niz[i]){
            brojac++;
        }
    }

    printf("\n%d se ponavlja %d puta u nizu", br, brojac);

    return 0;
}