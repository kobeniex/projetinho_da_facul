#include <stdio.h>

int main() {
    int num;
    int pares = 0, impares = 0;

    for (int i = 1; i <= 200; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);
        if (num % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    return 0;
}