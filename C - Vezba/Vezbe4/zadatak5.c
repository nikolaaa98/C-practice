#include <stdio.h>
#include <stdbool.h>

#define MIN_NUMBER 2

void upisi_broj(int *);
void prost(int n);
bool isPrime(int);


int main(){

    int n;
    upisi_broj(&n);
    prost(n);

    return 0;
}


void prost(int n){
   for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
}

void upisi_broj(int *n){
    printf("Unesite broj n : ");
    scanf("%d", n);
}


bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}