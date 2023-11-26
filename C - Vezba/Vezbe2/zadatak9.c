#include <stdio.h>
#define MIN 0

int faktorijal(int n){
    int fakt = 1;
    for(int i = 1; i<=n; i++){
        fakt *= i;
    }
    return fakt;
}

int main(){
    int n;
    printf("Unesite broj n : ");
    scanf("%d", &n);
    int rez;
    if(n <= MIN)
        printf("Greska, morate uneti broj veci od 0");
    else 
        rez = faktorijal(n);

    printf("%d!=%d", n, rez);
    return 0;
}