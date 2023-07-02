#include <stdio.h>

// prenos vrednosti po vrednosti

void foo(int i) {
    i = 3;
}


// prenos vrednosti po referenci
void foo1(int *pi) {
    *pi = 3;
}

int main() {
    int i = 5;
    foo(i); // po vrednosti salje vrednost i
    printf("%d\n", i);

    foo1(&i); // Po referenci salje vrednost adrese na kojoj je promenjiva i
    printf("%d\n", i);

 return 0;
}
