/*
    Deklaracija
        • int a = 5;
        • int b, c;
        • int *p1, *p2;

    Dodela vrednosti
        • p1 = &a;
        • p2 = &b;

    Pristup lokaciji
        • c = *p1; 
        • *p2 = 6;

    • Unarni operator & daje adresu promenljive
    • Izraz p1 = &a dodeljuje vrednost adrese promenljive a pokazivačkoj promenljivoj p1
        • p1 "pokazuje" na promenljivu a
    • Da bi se ištampala vrednost pokazivačke promenljive, koristi se format specifikator %p
    • Vrednost počinje sa "0x" i predstavlja celobrojnu vrednost memorijske lokacije u heksadecimalnom brojnom sistemu

    • Unarni operator *, omogućuje posredan pristup podatku pomoću adrese u pokazivačkoj promenljivoj
    • Razlika između * kod deklaracije i operatora dereferenciranja!
    • Deklaracija pokazivačke promenljive p1
        • int *p1;
    • Dodela adrese promenljive a pokazivačkoj promenljivoj p1
        • p1 = &a;
    • Dodela vrednosti 3 promenljivoj čija adresa se nalazi u p1
        • *p1 = 3;

    Specijalna konstanta NULL
    • Nalazi se u stdio.h
    • Predstavlja vrednost koja opisuje da pokazivačka promenljiva pokazuje "ni na šta"
        Primer:
            int *p;
            p = NULL
*/


#include <stdio.h>
int main() {
    int i;
    int *pi;
    i = 7;
    pi = &i;
    printf("Vrednost promenljive i: %d\n", i);
    printf("Vrednost adrese u pi: %p\n\n", pi);
    printf("Vrednost adrese pi: %p\n", &pi);
    printf("Vrednost adrese u pi: %p\n\n", pi);
    printf("Vrednost adrese u pi: %p\n", pi);
    printf("Vrednost promenljive na adresi iz pi: %d\n\n", *pi);
    i = 10;
    printf("Vrednost adrese u pi: %p\n", pi);
    printf("Vrednost promenljive na adresi iz pi: %d\n\n", *pi);
    (*pi)++;
    printf("Vrednost adrese promenljive i: %p\n", &i);
    printf("Vrednost promenljive i: %d\n\n", i);
    return 0;
}
