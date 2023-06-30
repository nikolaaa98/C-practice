#include <stdio.h>

int calculate(int a, int b){
    int rez = 1;
    for (int i = 1; i<=b; i++){
        rez *= a;
    }
    return rez;
}

int main(){

    int a, b;
    printf("Unesite a: ");
    scanf("%d", &a);
    printf("Unesite b : ");
    scanf("%d", &b);

    printf("%d^%d=%d",a,b,calculate(a,b));
    return 0;
}