#include <stdio.h>

int main() {

    float numero1,numero2,numero3,numero4,numero5,numero6,multiplicacion;

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);

    printf("Ingrese el tercero numero: ");
    scanf("%f", &numero3);

    printf("Ingrese el cuarto numero: ");
    scanf("%f", &numero4);

    printf("Ingrese el quinto numero: ");
    scanf("%f", &numero5);

    printf("Ingrese el sexto numero: ");
    scanf("%f", &numero6);

    multiplicacion = numero1*numero2*numero3*numero4*numero5,numero6;

    printf("El resultado de la multiplicacion es: %.4f ",multiplicacion);

    return 0;

    }
