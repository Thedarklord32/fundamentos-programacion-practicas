#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2, real, imag;

    printf("Ingrese a, b y c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Ecuacion identidad: infinitas soluciones\n");
            } else {
                printf("Ecuacion degenerada: no tiene solucion\n");
            }
        } else {
            x1 = -c / b;
            printf("Ecuacion lineal\n");
            printf("Solucion: x = %.2f\n", x1);
        }
    } else {
        d = b * b - 4 * a * c;

        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("Dos raices reales distintas:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (d == 0) {
            x1 = -b / (2 * a);
            printf("Raiz real doble:\n");
            printf("x = %.2f\n", x1);
        } else {
            real = -b / (2 * a);
            imag = sqrt(-d) / (2 * a);
            printf("Raices complejas conjugadas:\n");
            printf("x1 = %.2f + %.2fi\n", real, imag);
            printf("x2 = %.2f - %.2fi\n", real, imag);
        }
    }

    return 0;
}
