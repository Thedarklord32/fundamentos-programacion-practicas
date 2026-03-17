#include <stdio.h>

int main() {

    float numero1,numero2,numero3,multiplicacion,suma,resta,division,resultado;

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);

    printf("Ingrese el tercer numero: ");
    scanf("%f", &numero3);

    multiplicacion = numero1*numero2*numero3;
    resta = numero1-numero2-numero3;
    suma = numero1+numero2+numero3;
    division = numero1/numero2/numero3;

    resultado= multiplicacion+resta+suma+division;

    printf("El resultado de la multiplicacion es: %.2f\n ",multiplicacion);
    printf("El resultado de la resta es: %.2f\n ",resta);
    printf("El resultado de la suma es: %.2f\n ",suma);
    printf("El resultado de la division es: %.2f\n ",division);
    printf("El resultado total es: %.2f\n ",resultado);


    return 0;

    }
