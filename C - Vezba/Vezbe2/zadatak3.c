#include <stdio.h>
#include <math.h>


double func_x(double x){
    double retVal = 0;
    if(x < 0)   
        retVal = -7;
    if(x >= 0 && x < 1){
        retVal = pow(x, 1/4) + 4;
    }
    if(x >= 1 && x < 13){
        retVal = 2*sqrt(x) - 5;
    }
    if(x >= 13){
        retVal = x*x/9;
    }
    return retVal;
}

int main(){

    double x;
    printf("Unesite broj x = ");
    scanf("%lf", &x);
    printf("Za uneto x, f(x) = %lf", func_x(x));

    return 0;
}