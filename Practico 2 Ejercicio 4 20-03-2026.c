#include <stdio.h>

int main (){

    char nombre [50];
    float salario, aguinaldo, meses;

    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", &nombre);

    printf("Ingrese el salario del trabajador: ");
    scanf("%f", &salario);

    printf("Ingrese los meses que trabajo: ");
    scanf("%f", &meses);

    if(meses < 1 || meses > 12){
            printf("Error: Meses invalidos\n");
    }else{

        aguinaldo = salario * meses/12;

    printf("============================\n");
    printf("El trabajador: %s\n",nombre);
    printf("Su Aguinaldo es : %.2f\n",aguinaldo);
    printf("============================\n");
    }
    return 0;

    }
