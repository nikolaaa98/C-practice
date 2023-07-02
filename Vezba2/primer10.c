/*
    Napisati C program koji računa sumu prvih n prirodnih brojeva, pri čemu se n zadaje na početku programa.
*/

#include <stdio.h>
#include <math.h>

int main(){

    int n;
    printf("Unesite koliko prvih brojeva zelite da saznate zbir : ");
    scanf("%d", &n);
    int suma = 0;
    for(int i = 0; i<=n; i++){
        suma += i;
    }
    printf("Suma prvih %d brojeva je %d", n, suma);
    return 0;
}
