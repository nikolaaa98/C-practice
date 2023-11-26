#include <stdio.h>

void upis_brojeva(int *, int *);
void pisi_prestupne_godine (int, int);

int main(){

    int n, m;
    upis_brojeva(&n, &m);
    pisi_prestupne_godine(n, m);
    return 0;
}

void pisi_prestupne_godine (int n, int m){
    for(int year = n; year <= m; year++){
        if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ){
            printf("%d\n", year);
        }
    }
}

void upis_brojeva(int *n, int *m){
    
    printf("Unesite broj n : ");
    scanf("%d", n);
    printf("Unesite broj m : ");
    scanf("%d", m);
}