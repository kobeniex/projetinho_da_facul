# include <stdio.h.>

int main () {

    int numero, i, fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        for (i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("Fatorial de %d = %d\n", numero, fatorial);
    }

    return 0;
}