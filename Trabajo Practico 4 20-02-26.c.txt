#include <stdio.h>

int main() {

    float dia1,dia2,dia3,dia4,dia5,dia6,dia7,Resultado,Iva;

    printf("Ingrese los ingresos del dia 1: ");
    scanf("%f", &dia1);

    printf("Ingrese los ingresos del dia 2: ");
    scanf("%f", &dia2);

    printf("Ingrese los ingresos del dia 3: ");
    scanf("%f", &dia3);

    printf("Ingrese los ingresos del dia 4: ");
    scanf("%f", &dia4);

    printf("Ingrese los ingresos del dia 5: ");
    scanf("%f", &dia5);

    printf("Ingrese los ingresos del dia 6: ");
    scanf("%f", &dia6);

    printf("Ingrese las ganacias del dia 7: ");
    scanf("%f", &dia7);

    Resultado= dia1+dia2+dia3+dia4+dia5+dia6+dia7;
    Iva=Resultado*0.13;

    printf("El resultado total de las ganancias es: %.2f\n ",Resultado);

    printf("El resultado total de las ganancias con IVA es: %.2f\n ",Iva);

    return 0;

    }
