#include <stdio.h>

int main(void) {
    double salario_min, salario;
    printf("Salario minimo: ");
    scanf("%lf", &salario_min);
    printf("Salario da pessoa: ");
    scanf("%lf", &salario);
    printf("Ganha %.2f salarios minimos\n", salario / salario_min);
    return 0;
}