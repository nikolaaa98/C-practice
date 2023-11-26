#include <stdio.h>

int main(){

    double galon, litar;

    printf("Unesite kolicinu tecnosti u galonima : ");
    scanf("%lf", &galon);
    litar = galon * 4.54;
    printf("Tecnost (%lf u galonima) u litrima je %lf", galon, litar);

    return 0;
}