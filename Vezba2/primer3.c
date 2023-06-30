/*
    a
.
Napisati C program koji traži od korisnika da unese dva broja. Ispisati
veći od ta dva broja.
b
.
Napisati C program koji traži od korisnika da unese tri broja. Ispisati
najmanji od ta tri broja.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c;
    printf("Unesite broj a : ");
    scanf("%d",&a);
    printf("Unesite broj b : ");
    scanf("%d",&b);
    printf("Unesite broj c : ");
    scanf("%d",&c);
    int niz[] = {a, b, c};
    int min = a;

    /* a)
    if(a > b){
        printf("Veci je broj : %d", a);
    }
    else if(b > a){
        printf("Veci je broj %d", b);
    }
    else {
        printf("Brojevi su isti");
    }
    */
    for (int i = 0; i <= 2; i++){
        if(min > niz[i])
            min = niz[i];
    }
    printf("Najmanji broj je %d", min);

    return 0;
}