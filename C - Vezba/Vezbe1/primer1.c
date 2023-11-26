#include <stdio.h>

int main(){

    double celzijusi, kelvini;

    printf("Unesite temperaturu u Celzijusima : ");
    scanf("%lf", &celzijusi);
    kelvini = celzijusi + 273.15;
    printf("Temperatura (%lf u celzijusima) u kelvinima je %lf", celzijusi, kelvini);

    return 0;
}