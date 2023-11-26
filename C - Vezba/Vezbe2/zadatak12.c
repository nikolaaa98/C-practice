#include <stdio.h>


void proveri_prost_broj(int N){
    int kolikoBrojevaSamNasao = 0;
    for(int i = 2; i<N; i++){
        if(N%i == 0){
            kolikoBrojevaSamNasao++;
        }
    }

    if(kolikoBrojevaSamNasao == 0){
        printf("Broj je prost");
    }
    else{
        printf("Broj nije prost!");
    }
}


int main(){

    int N;
    printf("Unesite broj N : ");
    scanf("%d", &N);

    if(N >= 2){
        proveri_prost_broj(N);
    }

    return 0;
}