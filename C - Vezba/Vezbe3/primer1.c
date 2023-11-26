#include <stdio.h>
#define MAX_SIZE 30

int main(){

    int niz[MAX_SIZE], i, n;

    do {
        printf("Uneiste broj elemenata niza : ");
        scanf("%d", &n);
    }while (n <= 0 || n > MAX_SIZE);

    for(int i = 0; i < n; i++){
        printf("niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    printf("---------------------------------\n");
    for(int i = 0; i<n; i++){
        printf("niz[%d] = %d\n", i+1, niz[i]);
    }

    return 0;
}