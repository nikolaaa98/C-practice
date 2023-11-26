#include <stdio.h>

int main(){

    int a, b, mnozenje;
    printf("Unesite broj a : ");
    scanf("%d", &a);
    printf("Unesite broj b : ");
    scanf("%d", &b);
    int i = 1;

    if(a < b ){
        mnozenje = b;
        while(i < a){
            mnozenje = mnozenje + b;
            i++;
        }
    }
    else if(a > b){
        mnozenje = a;
        while(i < b){
            mnozenje = mnozenje + a;
            i++;
        }
    }

    printf("%d * %d = %d", a, b, mnozenje);

    return 0;
}