/*

        Stringovi
    • Nizovi karaktera sa specijalnom oznakom za kraj stringa
    • '\0' terminator, označava kraj stringa, "žrtvovana" jedna lokacija kako ne bi bilo potrebe da se posebno prati zauzeće niza
    • Unos i ispis sa standardnog ulaza
    • scanf i printf sa format specifikatorom %s
    • Specijalizovane funkcije za unos i ispis stringova gets i puts
    • Biblioteka sa funkcijama za rad sa stringovima string.h
        • strlen - vraća dužinu stringa
        • strcat - spajanje stringova
        • strcpy - kopiranje stringa
        • strstr - pokazivač na prvu pojavu stringa unutar većeg stringa
        • strcmp - poređenje stringova
    • Za više informacija o funkciji, koristiti man stranice, na primer:
    man strlen

*/

#include <stdio.h>

int main() {
    char znak;

    printf("Unesite znak: ");
    scanf("%c", &znak);

    printf("Znak kao karakter je: %c\n", znak);
    printf("Numericka vrednost znak-a je: %d\n", znak);
    printf("Karakter posle %c je %c\n", znak, znak + 1);

    return 0;
}