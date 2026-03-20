#include <stdio.h>
#include <math.h>

int main (){
    float area_lateral, area_total, volumen, PI;
    float R,H;

    PI = 3,141592;

    printf("\n====CALCULADORA DE CILINDRO====\n");

    printf("Ingrese el valor de Radio R: ");
    scanf("%f", &R);

    printf("Ingrese el valor de Altura H: ");
    scanf("%f", &H);

    area_lateral = 2 * PI * R * H;
    area_total = 2 * PI * R * (R+H);
    volumen = PI * pow(R, 2) * H;

    printf("\n====RESULTADOS====\n");
    printf("Area lateral es: %.2f\n", area_lateral);
    printf("Area total es: %.2f\n", area_total);
    printf("El volumen es: %.2f\n", volumen);

    return 0;

    }
