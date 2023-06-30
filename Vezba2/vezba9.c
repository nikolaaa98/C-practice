#include <stdio.h>

int main() {
 int ocena;
 printf("Unesite ocenu: ");
 scanf("%d", &ocena);
    switch(ocena) {
        case 5:
            printf("Odlican\n");
            break;
        case 4:
            printf("Vrlo dobar\n");
            break;
        case 3:
            printf("Dobar\n");
            break;
        case 2:
            printf("Dovoljan\n");
            break;
        case 1:
            printf("Nedovoljan\n");
            break;
        default:
    printf("Unesite ocenu izmedju 1 i 5!\n");
    }
 return 0;
}