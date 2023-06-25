/* 
    Izračunati površinu trougla upotrebom Heronovog obrasca.
    • a = 2cm
    • b = 4cm
    • c = 5cm
*/

#include <stdio.h>
#include <math.h>

int main(){

    float a = 2;
    float b = 4;
    float c = 5;
    float S = (a + b + c)/2;

    float P = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Povrsina zadatog trougla je : %f", P);
    return 0;
}