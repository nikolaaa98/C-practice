#include <stdio.h>

int main(int argc, char **argv) {
    
    int i;
    printf("\nBroj argumenata je: %d\n", argc);
    printf("\nKonkretni argumenti su:\n");
    
    for(i = 0;i < argc;i++) {
        puts(argv[i]);
    }

    return 0;
}