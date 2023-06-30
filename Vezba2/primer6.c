/*
    Tri tačke su zadate koordinatama u ravni. Napisati program kojim se
    izračunava površina paralelograma čiji su vrhovi date tačke.
    • Obratiti pažnju na proveru da li tačke u ravni formiraju trougao,
    odnosno paralelogram
*/

#include <stdio.h>
#include <math.h>

int main(){

    double Ax, Ay, Bx, By, Cx, Cy;

    printf("Unesite koordinate tacke A:\n");
	scanf("%lf %lf", &Ax, &Ay);
	printf("Unesite koordinate tacke B:\n");
	scanf("%lf %lf", &Bx, &By);
	printf("Unesite koordinate tacke C:\n");
	scanf("%lf %lf", &Cx, &Cy);

    // Racunanje duzine stranice
    double a = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
	double b = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2));
	double c = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    //Računanje površine po Heronovom obrascu
	double s = (a + b + c) / 2;
	double P = sqrt(s * (s - a) * (s - b) * (s - c)) * 2;

    printf("P=%.2lf\n", P);

    return 0;
}