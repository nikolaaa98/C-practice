/*
 
    Zadatak 8
Napisati program koji obrće cifre bilo koje celobrojne vrednosti.
Na primer, za broj 1234, rezultat nakon obrtanja je 4321.


*/

#include <stdio.h>
#define MAX 20 

int main()
{ 
    int i=0, j, n, x, pom, y=0, z[MAX];

    printf("Unesite opseg n: ");
    scanf("%d",& n);

    while(1)
    { 
        printf("\n\nUnesite jedan ceo broj: ");
        scanf("%d",&x);

        if(x <1 || x>n)
            break;
 
        pom=x; 
        while(pom!=0) 
        { 
            y=y*10+pom%10;

            if(pom%10 != 0)
                z[i++]=pom%10; 
            pom=pom/10; 
        }

        printf("\nBroj y: ");
        printf("y= %d\n",y);

        printf("Niz z: ");
        for(j=0;j<i;j++)
        printf("%d ",z[j]);
        }
} 