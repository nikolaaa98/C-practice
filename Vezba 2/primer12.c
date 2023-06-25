/*
    Napisati program kojim se za celobrojnu vrednost n izračunava njegov
    faktorijel.
        n! = 1 ⋅ 2 ⋅ 3 ⋅ . . . ⋅ n
*/

#include <stdio.h>

int main(){

    int n;
    printf("Unesite n za koji zelite da izracunate faktorijel : ");
    scanf("%d", &n);

    int faktorijel = 1;
    for (int i = 1; i<= n; i++){
        faktorijel *= i;
    }
    printf("%d! = %d", n, faktorijel);
    return 0;
}