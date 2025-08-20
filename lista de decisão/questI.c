#include <stdio.h>

int main() {
    int cargo;
    float salario, novosalario;

    printf("Digite seu cargo (1 para professor e 2 para mecanico 3 para outro): ");
    scanf("%d", &cargo);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if (cargo == 1) {
        novosalario = salario + (salario * 0.50);
     } else if (cargo == 2) {
        novosalario = salario + (salario * 0.30); 
    } else if ( cargo == 3) {
        novosalario = salario + (salario * 0.10); 
    }

    printf("Seu novo salario e: %.2f\n", novosalario);

    return 0;
}
