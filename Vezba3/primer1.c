#include <stdio.h>

// int niz[5] = {1, 3, 2, 4, 5};
// int niz[5] = {0};
// int meseci[] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {

int i, niz[5];
/*
for(i = 0; i < 5;i++) {
    niz[i] = 0;}
*/
    for(i = 0;i < 5;i++) {
        printf("niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }


 return 0;
}
