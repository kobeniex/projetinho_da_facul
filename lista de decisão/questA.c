#include <stdio.h>

int main() {

int numero;

printf("Digite um numero inteiro: ");
scanf("%d", &numero);

if ( numero % 5 == 0 ) {

    printf(" o numero %d e multiplo de 5", numero);
}
else 
    printf(" o numero %d nao e multiplo de 5", numero);

    return 0;
}