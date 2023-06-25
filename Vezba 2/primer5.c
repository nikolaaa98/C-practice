/*
    Napisati program koji učitava vrednosti promenljivih a i b, a zatim rešava
    jednačinu:
                ax + b = 0
    • Pokriti sve slučajeve za različite kombinacije vrednosti a i b
*/

#include <stdio.h>

int main(){

    float x, a, b;
    printf("Unesite a : ");
    scanf("%f", &a);
    printf("Unesite b : ");
    scanf("%f", &b);
    x = -b/a;
    printf("x = %f", x);

    return 0;
}