#include <stdio.h>
#include <math.h>

int main(){

    float x;
    float f;
    printf("Unesite x : ");
    scanf("%f", &x);
    if(x < 0){
        f = -7;
    }
    if (x >= 0 && x < 1){
        f = pow(x, 1/4) + 4;
    }
    if(x >= 1 && x < 13){
        f = 2*sqrt(x) - 5;
    }
    else if(x >= 13){
        f = pow(x, 2)/9;
    }

    printf("f(x) = %f", f);
    return 0;
}