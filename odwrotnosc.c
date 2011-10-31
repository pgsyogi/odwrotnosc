#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

double x;
scanf("%lf", &x);

if(x < 0)
    printf("Nie da sie obliczyc pierwiastka z 0... \n");

else{
double y = sqrt(x);
    printf("Pierwiasterk z liczby %lf to %lf \n", x, y);
    }

if(x = 0)
    printf("Podana liczba to 0. Nie obliczam odwrotnosci\n");

else {
double odw = pow(x, -1.00);
    printf("Odwrotnosc liczby %lf to %lf \n", x, odw);
}
return 0;
}