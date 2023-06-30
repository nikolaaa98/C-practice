/*
    Sa standardnog ulaza učitati prirodne brojeve N i q. Koristeći while ciklus
    ispisati sve brojeve od 2 do N koji su deljivi sa q.
*/

#include <stdio.h>

int main(){

    int N, q;
    printf("Unesite broj N : ");
    scanf("%d", &N);
    printf("Unesite broj q : ");
    scanf("%d", &q);
    int i = 2;
    printf("Brojevi deljivi sa %d su : \n", q);
    while(i <= N){
        if(i % q == 0){
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}