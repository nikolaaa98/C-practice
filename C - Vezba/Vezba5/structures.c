/*
    .. epigraph::
    U životu su izvesne samo dve stvari – smrt i porez.

    -- Bendžamin Frenklin (1706 - 1790)

Iz zadate ulazne datoteke učitati statički niz struktura, pri čemu se struktura
``poreska_stopa_st`` sastoji od sledećih polja:

- skraćena oznaka grada (jedna reč, tačno 2 karaktera)
- osnovni porez (prirodan broj)
- dodatni porez po kvadratu nekretnine (pozitivan realan broj)
- procenat poreskog popusta po članu domaćinstva (pozitivan realan broj)

Na osnovu površine nekretnine ``povrsina`` (pozitivan realan broj) i broja
članova domaćinstva ``clanova`` (prirodan broj) formirati novi statički niz
struktura i upisati ga u zadatu izlaznu datoteku, pri čemu se struktura
``porez_st`` sastoji od sledećih polja:

- skraćena oznaka grada (koristiti funkciju ``strcpy`` prilikom kopiranja iz strukture ``poreska_stopa_st``)
- ukupan porez bez popusta (zaokružen na 0 decimala, koristiti ``"%5.0f"`` format specifikator)
- ukupan porez sa popustom (zaokružen na 0 decimala, koristiti ``"%5.0f"`` format specifikator)

Primer poziva::

    ./porez 74.1 3 poreske_stope.txt porezi.txt

sa ``povrsina=74.1`` i ``clanova=3``, zadatim ulazom u datoteci ``poreske_stope.txt``::

    NS 1712 67.1 1.1
    NI  800 42.3 1.7
    BG 3270 98.6 1.5
    SU 1000 47.5 1.3

i očekivanim izlazom u datoteci ``porezi.txt``::

    NS  6684  6464
    NI  3934  3734
    BG 10576 10100
    SU  4520  4343
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAZIV_GRADA 2+1
#define MAX_NIZ 30

struct poreska_stopa_st {
    char grad[MAX_NAZIV_GRADA];
    unsigned osnovni_porez;
    double porez_po_kvadratu;
    double popust_po_clanu;
};

struct porez_st {
    char grad[MAX_NAZIV_GRADA];
    double ukupan_porez;
    double ukupan_porez_sa_popustom;
};


FILE *safe_fopen(char filename[], char mode[], int errorCode);
void ucitaj_poreske_stope(FILE *in, struct poreska_stopa_st stope[], int *n);
double odredi_ukupan_porez(struct poreska_stopa_st stopa, double povrsina);
double odredi_ukupan_porez_sa_popustom(double ukupan_porez, int clanova, double popust_po_clanu);
void transform(struct poreska_stopa_st stope[], struct porez_st porezi[], int n,
double povrsina, int clanova);
void snimi_poreze(FILE *out, struct porez_st porezi[], int n);


int main(int arg_num, char **args){

    if (arg_num != 5) {
        printf("USAGE: %s POVRSINA CLANOVA IN_FILE OUT_FILE\n", args[0]);
        exit(1);
    }

    double povrsina = atof(args[1]); // funkcija konvertuje string u double
    int clanova = atoi(args[2]);
    char *in_filename = args[3];
    char *out_filename = args[4];

    FILE *in  = safe_fopen(in_filename,  "r", 1);
    FILE *out = safe_fopen(out_filename, "w", 2);

    struct poreska_stopa_st stope[MAX_NIZ];
    struct porez_st porezi[MAX_NIZ];
    int n;

    ucitaj_poreske_stope(in, stope, &n);
    transform(stope, porezi, n, povrsina, clanova);
    snimi_poreze(out, porezi, n);

    fclose(in);
    fclose(out);

    return 0;
}

void ucitaj_poreske_stope(FILE *in, struct poreska_stopa_st stope[], int *n){
       *n = 0;
    while(
    fscanf(in, "%s %u %lf %lf", stope[*n].grad, &stope[*n].osnovni_porez, &stope[*n].porez_po_kvadratu, &stope[*n].popust_po_clanu) != EOF) {
        (*n)++;
    }
}

FILE *safe_fopen(char filename[], char mode[], int error_code){
    FILE *fp = fopen(filename, mode);
    if(fp == NULL) {
        printf("Can't open '%s'!\n", filename);
        exit(error_code);
    }
    return fp;
}

double odredi_ukupan_porez(struct poreska_stopa_st stopa, double povrsina) {
    return stopa.osnovni_porez + stopa.porez_po_kvadratu * povrsina;
}

double odredi_ukupan_porez_sa_popustom(double ukupan_porez, int clanova, double popust_po_clanu) {
    double ukupan_popust = clanova * popust_po_clanu / 100;
    return ukupan_porez * (1 - ukupan_popust);
}


void transform(struct poreska_stopa_st stope[], struct porez_st porezi[], int n, double povrsina, int clanova) {
    int i;
    for(i=0; i<n; i++) {
        strcpy(porezi[i].grad, stope[i].grad);

        porezi[i].ukupan_porez = odredi_ukupan_porez(stope[i], povrsina);
        porezi[i].ukupan_porez_sa_popustom = odredi_ukupan_porez_sa_popustom(
            porezi[i].ukupan_porez, clanova, stope[i].popust_po_clanu
        );
    }
}

void snimi_poreze(FILE *out, struct porez_st porezi[], int n) {
    int i;
    for(i=0; i<n; i++) {
        fprintf(
            out, "%s %5.0f %5.0f\n",
            porezi[i].grad,
            porezi[i].ukupan_porez,
            porezi[i].ukupan_porez_sa_popustom
        );
    }
}