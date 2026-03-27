#include <stdio.h>
#include <math.h>

int main() {
    float c, t, monto_total, cuota_mensual, interes_total;
    int n;

    printf("Ingrese el capital prestado: ");
    scanf("%f", &c);

    printf("Ingrese la tasa de interes mensual: ");
    scanf("%f", &t);

    printf("Ingrese el numero de cuotas: ");
    scanf("%d", &n);

    cuota_mensual = c * (t * pow((1 + t), n)) / (pow((1 + t), n) - 1);
    monto_total = cuota_mensual * n;
    interes_total = monto_total - c;

    printf("\n====================================\n");
    printf("La cuota mensual es: %.2f\n", cuota_mensual);
    printf("El monto total es: %.2f\n", monto_total);
    printf("El interes total es: %.2f\n", interes_total);
    printf("====================================\n");

    return 0;
}
