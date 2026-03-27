#include <stdio.h>

int main() {
    int minutos, dias, horas, min_restantes, resto;

    printf("Ingrese la cantidad de minutos: ");
    scanf("%d", &minutos);

    dias = minutos / 1440;
    resto = minutos % 1440;
    horas = resto / 60;
    min_restantes = resto % 60;

    printf("%d minutos equivalen a %d dias, %d horas y %d minutos\n",
           minutos, dias, horas, min_restantes);

    return 0;
}
