#include <stdio.h>

int main(){
    int broj; 
    int mesec;
    int dani;
    printf("Unesite neki celobrojni broj manji od 365 : ");
    scanf("%d", &broj);
    if(broj > 365){
        printf("Unesite broj manji od 365");
    }
    else{
        mesec = broj/30;
        dani = broj - mesec * 30;
        printf("To je datum %d.%d", dani, mesec); 
    }
    return 0;
}