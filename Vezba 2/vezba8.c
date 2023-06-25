/*
    Zadatak 6
Napisati program koji za unetu visinu (u centimetrima) i telesnu težinu
osobe (u kilogramima) ispisuje njen BMI indeks.
Potom ispisati određeni ispis na ekran na osnovu dobijene vrednosti
indeksa:
• Veoma neuhranjeno, za vrednosti manje od 16.5
• Neuhranjeno, za vrednosti između 16.5 i 18.5
• Normalno, za vrednosti od 18.5, do 24.9
• Prekomerno, za vrednosti od 25, do 29.9
• Gojaznost, za vrednosti veće od 30
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    float visina, tezina;
    printf("Unesite vasu visinu (cm) : ");
    scanf("%f", &visina);
    printf("Ünesite vasu tezinu (kg) : ");
    scanf("%f", &tezina);
    visina = visina/100;
    float BMI = tezina/(visina*visina);
    printf("BMI = %f/n", BMI);
    
    if(BMI < 16.5) printf("Veoma Neuhranjeno");
    else if(BMI >= 16.5 && BMI < 18.5) printf("Neuhranjeno");
    else if(BMI >= 18.5 && BMI <= 24.9) printf("Normalno");
    else if(BMI >= 25 && BMI <= 29.9) printf("Prekomerno");
    else if(BMI >= 30) printf("Gojaznost");

    return 0;
}
