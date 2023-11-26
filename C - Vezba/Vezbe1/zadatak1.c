#include<stdio.h>
#include<math.h>

int main(){
    
    float S;
    float P;

    float a = 2, b = 4, c = 5;
    S = (a + b + c) / 2;
    P = sqrt(S*(S-a)*(S-b)*(S-c));

    printf("Povrsina trougla putem Heronovog obrasca je : %f", P);
    return 0;
}