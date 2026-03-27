#include <stdio.h>

int main() {
    float kwh, tarifa, monto, total;
    char categoria[20];

    printf("Ingrese el consumo mensual en kWh: ");
    scanf("%f", &kwh);

    if (kwh == 0) {
        printf("SIN CONSUMO REGISTRADO\n");
    } else {
        if (kwh > 0 && kwh <= 100) {
            tarifa = 0.30;
            sprintf(categoria, "Basica");
        } else if (kwh <= 300) {
            tarifa = 0.50;
            sprintf(categoria, "Media");
        } else if (kwh <= 600) {
            tarifa = 0.75;
            sprintf(categoria, "Alta");
        } else {
            tarifa = 1.10;
            sprintf(categoria, "Industrial");
        }

        monto = kwh * tarifa;
        total = monto + 8.00;

        printf("Categoria: %s\n", categoria);
        printf("Monto a pagar: Bs %.2f\n", total);
    }

    return 0;
}
