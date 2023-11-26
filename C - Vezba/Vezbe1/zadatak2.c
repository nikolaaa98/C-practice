#include<stdio.h>
#include<math.h>

int main(){
    
    float S;
    float P;

    float a, b, c;
    printf("Unesite stranicu a : ");
    scanf("%f", &a);

    printf("Unesite stranicu b : ");
    scanf("%f", &b);

    printf("Unesite stranicu c : ");
    scanf("%f", &c);

    S = (a + b + c) / 2;
    P = sqrt(S*(S-a)*(S-b)*(S-c));

    printf("Povrsina trougla putem Heronovog obrasca je : %f", P);
    return 0;
}