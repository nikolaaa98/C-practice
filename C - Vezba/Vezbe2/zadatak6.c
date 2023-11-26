#include <stdio.h>

int main(){

    double masa;
    printf("Unesite masu [kg] : ");
    scanf("%lf", &masa);
    double visina;
    printf("Unesite visinu [cm] : ");
    scanf("%lf", &visina);

    double square_hight = visina/100;
    square_hight = square_hight * square_hight;

    double BMI = masa/square_hight;
    printf("Vas BMI = %lf", BMI);
    
    if(BMI < 16.5)
    printf("\nVeoma neuhranjeno");
    if(BMI >= 16.5 && BMI < 18.5)
    printf("\nNeuhranjeno");
    if(BMI >= 18.5 && BMI <= 24.9)
    printf("\nNormalno");
    if(BMI >= 25 && BMI <= 29.9)
    printf("\nPrekomerno");
    if(BMI >= 30)
    printf("\nGojaznost");

    return 0;
}