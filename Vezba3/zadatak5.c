/*
        Napisati program koji kao parametre uzima jedan string i karakter.
        Program ispisuje broj pojavljivanja karaktera u stringu.
        • Za primer stringa "tatatatira" i karaktera 'a', broj pojavljivanja
        karaktera je 4
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING 31

int main(){

    char string[MAX_STRING];
    char karakter;
    char brojac;
    int broj_ponavljanja = 0;

    printf("Unesite neki string : ");
    //scanf("%s", string);
    gets(string);

    printf("Unesite neki karakter : ");
    scanf("%c", &karakter);

    for(brojac = 0; brojac <= MAX_STRING; brojac++){
        if(string[brojac] == karakter){
            broj_ponavljanja++;
        }
    }

    printf("%c karakter se u %s stringu ponavlja tacno %d puta", karakter, string, broj_ponavljanja);
    return 0;
}