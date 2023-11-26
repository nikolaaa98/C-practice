#include <stdio.h>
#include <math.h>

int main(){

    float x1 = -2, x2 = 4, x3 = 12;
    float y1 = 0, y2 = 8, y3 = -2;

    float P = 1/2*(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
    printf("Povrsina trougla zadatog ovim tackama je %f", P);

    return 0;
}