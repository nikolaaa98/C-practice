/*
    Napisati program koji ispituje da li je dati prirodan broj n prost. Broj je
    prost ako je deljiv samo sa jedan i sa samim sobom.
*/

#include<stdio.h>

int main(){

    int n;
    int flag = 0;
    printf("Unesite broj koji zelite da proverite da li je prost : ");
    scanf("%d", &n);
    

    if(n == 0 || n == 1){
        flag = 1;
    }

    for(int i = 0; i<n/2; ++i){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }

    
    if(flag == 0)  { 
        printf("%d je prost broj", n);
    }
    else {
        printf("%d nije prost broj", n);
    }
    

    return 0;
}