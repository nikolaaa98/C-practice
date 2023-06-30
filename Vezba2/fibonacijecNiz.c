// Fibonačijev niz:
// 0,1,1,2,3,5,8,13,21,34,55,89,144,....


#include <stdio.h>


int main(){

    int n, k;
    long int array[20];

    printf("Unesite brojevni opseg : ");
    scanf("%d", &n);

    array[0] = 1;
    array[1] = 1;

    printf("\nFIBONACCI SERIES : \n");
    for(k = 2; k<=n+1; k++){
        array[k] = array[k-1] + array[k-2];
        printf("%ld \n", array[k]);
    }

    return 0;
}