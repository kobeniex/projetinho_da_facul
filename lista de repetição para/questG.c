#include <stdio.h>

int main () {

    int numero;
    int soma = 0;

    for (int i = 1; i <= 12; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);
        printf("Numero lido: %d\n", numero);
        soma += numero;
    }

    float media = soma / 12.0f;
    printf("Soma = %d\n", soma);
    printf("Media aritmetica = %.2f\n", media);

    return 0;
}
