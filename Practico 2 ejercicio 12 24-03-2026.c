#include <stdio.h>

int main() {
    int dia, mes, anio;

    printf("Ingrese dia, mes y anio: ");
    scanf("%d %d %d", &dia, &mes, &anio);

    if ((mes == 12 && dia >= 21) || (mes == 1) || (mes == 2) || (mes == 3 && dia < 21)) {
        printf("La estacion es: Verano\n");
    }
    else if ((mes == 3 && dia >= 21) || (mes == 4) || (mes == 5) || (mes == 6 && dia < 21)) {
        printf("La estacion es: Otono\n");
    }
    else if ((mes == 6 && dia >= 21) || (mes == 7) || (mes == 8) || (mes == 9 && dia < 21)) {
        printf("La estacion es: Invierno\n");
    }
    else if ((mes == 9 && dia >= 21) || (mes == 10) || (mes == 11) || (mes == 12 && dia < 21)) {
        printf("La estacion es: Primavera\n");
    }
    else {
        printf("Fecha no valida\n");
    }

    return 0;
}
