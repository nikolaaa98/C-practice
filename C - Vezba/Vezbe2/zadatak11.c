#include <stdio.h>

void ispisi_cionioce_broja(int N){
    int i;
    printf("Cinioci broja %d su : \n", N);
    if(N%2 == 0){
        printf("2\n");
    }
    for(i = 2; i <= N; i++){
        if(N%i == 0){
            printf("%d\n", i);
            N = N/i;
            i=2;
        }
    }
}

int main(){

    int N;
    printf("Unesite broj N (mora biti veci od 0) : ");
    scanf("%d", &N);

    if(N > 0){
        ispisi_cionioce_broja(N);
    }
    else{
        printf("Broj mora biti veci od 0!");
    }

    return 0;
}