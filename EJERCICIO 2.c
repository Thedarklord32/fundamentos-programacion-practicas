#include <stdio.h>

int main() {

    char nombre[50];
    int cantidad;
    int total;
    int precio = 8;

    printf("Ingrese nombre del cliente: ");
    scanf("%s", nombre);

    printf("Ingrese cantidad de productos: ");
    scanf("%d", &cantidad);

    total = cantidad * precio;

    printf("Cliente: %s\n", nombre);
    printf("Total a pagar: %d Bs\n", total);
    return 0;
}
