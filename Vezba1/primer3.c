// Proširiti Zadatak 1 tako da se vrednosti stranica trougla unose sa tastature. 
// Prikaz rezultata površine trougla zaokružiti na dve decimale

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;
    printf("Unesite stranicu a : ");
    scanf("%f",&a);
    printf("Unesite stranicu b : ");
    scanf("%f",&b);
    printf("Unesite stranicu c : ");
    scanf("%f",&c);

    float S = (a + b + c)/2;
    float P = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Povrsina zadatog trougla je : %f", P);

    return 0;
}