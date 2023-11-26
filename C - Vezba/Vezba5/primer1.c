#include <stdio.h>

struct tacka_st {
    double x;
    double y;
};

void unos_tacke(struct tacka_st *);
void ispis_tacke(struct tacka_st);


int main(){

    struct tacka_st t1, t2;

    unos_tacke(&t1);
    unos_tacke(&t2);

    ispis_tacke(t1);
    ispis_tacke(t2);

    return 0;
}

void unos_tacke(struct tacka_st *pt){
    printf("Unesite x i y koordinatu tacke : ");
    scanf("%lf %lf", &(*pt).x, &(*pt).y);
}

void ispis_tacke(struct tacka_st t){
    printf("(%.2lf, %.2lf)\n", t.x, t.y);
}