#include <stdio.h>

int main(){

    int cifra_stotine, cifra_jedinice, cifra_desetice;
    int armstrongov_broj;

    printf("Spisak armstrongovih brojeva od (100 -> 999) : \n");
    for(int i = 100; i<1000; i++){
        cifra_stotine = i/100;
        cifra_desetice = i/10 % 10;
        cifra_jedinice = i % 10;
        armstrongov_broj = cifra_stotine*cifra_stotine + cifra_desetice*cifra_desetice*cifra_desetice + cifra_jedinice*cifra_jedinice*cifra_jedinice;
        if(i == armstrongov_broj)
            printf("%d",i);
    }

    return 0;
}