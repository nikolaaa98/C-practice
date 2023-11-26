#include <stdio.h>

int main(){

    double a, b;
    printf("Unesite a : ");
    scanf("%lf", &a);

    printf("Unesite b : ");
    scanf("%lf", &b);

    double x = -b/a;
    printf("x = %lf", x);
    
    return 0;
}