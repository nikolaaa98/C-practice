#include <stdio.h>
#define MIN_N 2
#define MIN_Q 1

void proveri_deljive_brojeve(int n, int q){
    int i = 2;
    printf("Brojevi deljivi od 2 do %d sa %d su : ", n, q);
    while(i <= n){
        if(i % q == 0){
            printf("%d\n", i);
        }
        i++;
    }
}

int main(){

    int N, q;
    printf("Unesite broj N : ");
    scanf("%d", &N);
    printf("Unesite broj q : ");
    scanf("%d", &q);
    if(N >= MIN_N && q >= MIN_Q){
        proveri_deljive_brojeve(N, q);
    }
    else{
        printf("Morate uneti ispravne brojeve");
    }

    return 0;
}