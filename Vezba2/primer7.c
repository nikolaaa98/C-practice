/*

Napisati program koji proverava da li se od unetih vrednosti uglova može
formirati trougao. Ukoliko je to moguće, analizirati unete uglove:
    • Ako su dva ugla jednaka, ispisati da se radi o jednokrakom trouglu
    • Ako je jedan ugao od 90 stepeni, ispisati da se radi o pravouglom trouglu
    • Ako su sva tri ugla jednaka (60 stepeni), ispisati da se radi o jednakostraničnom trouglu
    • Za sve ostale slučajeve, samo ispisati da se može formirati trougao

Napomena:
Ukoliko neki trougao ispunjava više od jedne osobine, ispisati sve
osobine koje zadovoljava.
*/

#include <stdio.h>

int main(){

    int a, b, c;
    printf("Unesite ugao A : ");
    scanf("%d", &a);
    printf("Unesite ugao B : ");
    scanf("%d", &b);
    printf("Unesite ugao C : ");
    scanf("%d", &c);

    if(a == b && a == c && (a + b + c) == 90){
        printf("Jednakokrati trougao.");
    }
    else if(b == a && b == c && (a + b + c) == 90){
        printf("Jednakokrati trougao.");
    }
    else if(c == a && c == b && (a + b + c) == 90){
        printf("Jednakokrati trougao.");
    }
    else if(a == 90 || b == 90 || c == 90 && (a + b + c) == 90){
        printf("Pravougli trougao");
    }
    else if((a == 60 && b == 60 && c == 60) && (a + b + c) == 90){
        printf("Jednakostranicni trougao");
    }
    else if ((a + b + c) == 90){
        printf("Moze se formirati trougao");
    }
    else{
        printf("Ne moze se formirati trougao");
    }

    
    
    return 0;
}