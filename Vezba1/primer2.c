// • Učitavanje temperature u Celzijusima i konverzija u Kelvine

#include <stdio.h>

int main(){
    double celzijus, kelvin;

    printf("Unesite temperaturu u celizijusima : ");
    scanf("%lf", &celzijus);
    kelvin = celzijus + 273.15;
    printf("%lf stepeni celzijusa je %lf stepeni kelvina", celzijus, kelvin);

    return 0;
}