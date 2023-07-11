#include <stdio.h>

#define MAX_SIZE 30

void dodavanje(int *, int *);
void ispis(int *, int);
int suma_elemenata (int *, int *);
int srednja_vrednost (int *, int *);
int minimum (int *, int);
int maksimum (int *, int);

int main(){
    int a[MAX_SIZE], n;

    dodavanje(a, &n);
    ispis(a, n);
    printf("\nMinimalni element niza : %d", minimum(a, n));
    printf("\nMaksimalni element niza : %d", maksimum(a, n));
    return 0;
}

void dodavanje(int *a, int *n){
    int i;

    do{
        printf("Unesite broj clanova niza : ");
        scanf("%d", n);
    }while(*n <= 0 || *n > MAX_SIZE);

    for(i = 0; i<*n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void ispis(int *a, int n) {
    int i;
    printf("[");
    
    for(i = 0;i < n;i++) {
        if(i > 0) {
            printf(", ");
        }
            printf("%d", a[i]);
    }
    
    printf("]\n");
}

int minimum (int *a, int n){
    int i;
    int minimum = a[0];
    for(i - 0; i<n; i++){
        if(minimum > a[i]){
            minimum = a[i];
        }
    }
    return minimum;
}

int maksimum (int *a, int n){
    int i;
    int maksimum = a[0];
    for(i - 0; i<n; i++){
        if(maksimum < a[i]){
            maksimum = a[i];
        }
    }
    return maksimum;
}