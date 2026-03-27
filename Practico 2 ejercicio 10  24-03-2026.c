#include <stdio.h>

int main() {
    int dia1, mes1, dia2, mes2;
    int total1, total2, diferencia;
    int meses, dias;

    printf("Ingrese la fecha inicial (DD MM): ");
    scanf("%d %d", &dia1, &mes1);

    printf("Ingrese la fecha final (DD MM): ");
    scanf("%d %d", &dia2, &mes2);

    total1 = mes1 * 30 + dia1;
    total2 = mes2 * 30 + dia2;

    diferencia = total2 - total1;

    meses = diferencia / 30;
    dias = diferencia % 30;

    printf("Diferencia: %d meses y %d dias\n", meses, dias);

    return 0;
}
