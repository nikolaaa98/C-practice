#include <stdio.h>

int zbir(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int z;
    z = zbir(3, 5);
    printf("%d\n", z);
    return 0;
}