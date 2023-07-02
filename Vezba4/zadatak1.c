/*

    Napisati program koji prima argument komandne linije koji se sastoje od
    crtice i jednog slova i jednu reč. U programu zahtevati od korisnika da,
    takođe, unese jednu reč i na osnovu zadate opcije uraditi sledeće:
    • -s, spojiti uneti string i string argumenta komandne linije sa
    razmakom između njih i ispisati rezultujući string
    • -p, uporediti uneti string i string argumenta komandne linije i ispisati
    da li su isti po sadržaju
    • -n, ispisati da li se string argumenta komandne linije nalazi u unetom
    stringu
    Primer poziva programa:

*/

#include <stdio.h>

int main(int argc, char **argv){

    int n;
    printf("Unesite jednu opciju : \n1)-2\n2)-p\n3)-n\n: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        break;

    case 2:
        break;

    case 3:
        break;
    
    default:
        break;
    }

    return 0;
}