#include <stdio.h>

int main (){

    float ponderado_1, ponderado_2, ex_final, proyecto, total;

    printf("\n====CALCULAR NOTA FINAL====\n");
    printf("Ingrese la nota del primer examen parcial: ");
    scanf("%f", &ponderado_1);

    printf("Ingrese la nota del segundo examen parcial: ");
    scanf("%f", &ponderado_2);

    printf("Ingrese la nota del examen final: ");
    scanf("%f", &ex_final);

    printf("Ingrese la nota del proyecto: ");
    scanf("%f", &proyecto);

    total = (ponderado_1*0.25) + (ponderado_2*0.25) + (ex_final*0.30) + (proyecto*0.20);

    if(total >= 51 ){
            printf("\nEl estudiante Aprobo\n");
    }else {
            printf("\nEl estudiante Reprobo\n");
}
    printf("La nota final es: %.2f\n",total);

    return 0;

}
