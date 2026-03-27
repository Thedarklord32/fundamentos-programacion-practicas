#include <stdio.h>
#include <math.h>

int main(){
    float monto_acumalado, c, t, n, ganancias_neta;

    printf("Ingrese la capital inicial: ");
    scanf("%f", &c);

    printf("Ingrese la tasa de interes anual: ");
    scanf("%f", &t);

    printf("Ingrese el plazo de años: ");
    scanf("%f", &n);

    monto_acumalado = c * pow((1+t/12/100),(n*12));
    ganancias_neta = monto_acumalado - c;

    printf("\n====================================\n");
    printf("El monto acumulado es: %.2f\n",monto_acumalado);
    printf("Las ganancias neta es: %.2f\n",ganancias_neta);
    printf("\n====================================\n");

    return 0;
}
