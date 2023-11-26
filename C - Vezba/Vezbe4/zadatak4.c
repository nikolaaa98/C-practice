#include <stdio.h>

void stampajBrojeve();
int faktorijal(int);

int main(){

    stampajBrojeve();
    return 0;
}

void stampajBrojeve(){
    int cifra_jedinice, cifra_desetice, cifra_stotine;
    int suma_faktorijala = 0;

    for(int i = 100; i<=999; i++){
        cifra_stotine = i/100;
        cifra_desetice = i/10 % 10;
        cifra_jedinice = i % 10;
        suma_faktorijala = faktorijal(cifra_desetice) + faktorijal(cifra_jedinice) + faktorijal(cifra_stotine);
        if(suma_faktorijala == i){
            printf("Suma faktorijala cifara je %d", suma_faktorijala);
        }
    }
}

int faktorijal(int n){
    int fakt = 1;
    for(int i = 1; i<=n; i++){
        fakt *= i;
    }

    return fakt;
}