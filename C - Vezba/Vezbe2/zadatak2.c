#include <stdio.h>

int main(){

    int a, b;

    printf("Unesite broj a : ");
    scanf("%d", &a);
    printf("Unesite broj b : ");
    scanf("%d", &b);

    if(a > b){
        printf("%d vece od %d", a, b);
    }
    else if(a < b){
        printf("%d vece od %d", b, a);
    }
    else {
        printf("%d = %d", a, b);
    }

    return 0;
}