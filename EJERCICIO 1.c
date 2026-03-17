#include <stdio.h>

int main() {

    char nombre[50];
    int edad,telefono,semestre;
    char carrera[50];
    printf("Ingrese nombre del estudiante: ");
    scanf("%s", nombre);

    printf("Ingrese edad: ");
    scanf("%d", &edad);

    printf("Ingrese carrera: ");
    scanf("%s", carrera);

    printf("Ingrese semestre: ");
    scanf("%d", &semestre);

    printf("Ingrese telefono: ");
    scanf("%d" , &telefono);

    printf("\nDatos del estudiante\n");
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Carrera: %s\n", carrera);
    printf("Semestre: %d\n", semestre);
    printf("Telefono: %d\n", telefono);

    return 0;
}
