#include <stdio.h>

int main(){

    float c, f, k, ra;

    printf("Ingrese la temperatura en grados celsius: ");
    scanf("%f", &c);

    f = (c*9/5)+32;
    k = c+273.15;
    ra = (c+273.15)*9/5;

    printf("\n====================================\n");
    printf("Fahrenheit: %.2f\n",f);
    printf("Kelvin: %.2f\n",k);
    printf("Rankine: %.2f\n",ra);
    printf("\n====================================\n");

    return 0;

}
