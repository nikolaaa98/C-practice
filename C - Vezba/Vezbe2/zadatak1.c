#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    printf("Unesite broj a : ");
    scanf("%d", &a);
    printf("Unesite broj b : ");
    scanf("%d", &b);
    printf("Unesite broj c : ");
    scanf("%d", &c);

    double aritmeticka = ((double)a + (double)b + (double)c)/3;
    double harmonijska = 3/(1/(double)a + 1/(double)b + 1/(double)c);
    double geometrijska = pow((double)a*(double)b*(double)c, 1/3);
    double kvadratna = sqrt(((double)a*(double)a + (double)b*(double)b + (double)c*(double)c)/3);

    printf("Aritmeticka : %lf\n", aritmeticka);
    printf("Harmonijska : %lf\n", harmonijska);
    printf("Geometrijska : %lf\n", geometrijska);
    printf("Kvadratna : %lf\n", kvadratna);

    return 0;
}