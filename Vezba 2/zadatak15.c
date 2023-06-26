/*
    Napisati program kojim se štampaju svi trocifreni Armstrongovi brojevi.
    Broj je Armstrongov ako je jednak zbiru kubova svojih cifara.
*/

#include <stdio.h>
#include <math.h>

int main(){

    int stotina;
    int desetica;
    int jedinica;
    int zbir_kubova;
    printf("Trocifreni armstrongovi brojevi su : \n");
    for(int i = 100; i<=999; i++){
        jedinica = i%10;
        desetica = (i/10)%10;
        stotina = (i/10)/10;
        zbir_kubova = pow(jedinica,3) + pow(desetica,3) + pow(stotina,3);
        if(i == zbir_kubova){
            printf("%d ", i);
        }
    }
    return 0;
}