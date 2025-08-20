#include <stdio.h>

int main(){

float numero, numero1;
int operacao;

printf("digite um numero: ");
scanf("%f", &numero);

printf("digite a operacao (1 para soma, 2 para subtracao, 3 para multiplicacao, 4 para divisao): ");
scanf("%d", &operacao);

printf("digite outro numero: ");
scanf("%f", &numero1);

if (operacao == 1) {
    printf("resultado: %.2f\n", numero + numero1);
} else if (operacao == 2) { 
    printf("resultado: %.2f\n", numero - numero1);
} else if (operacao == 3) {
    printf("resultado: %.2f\n", numero * numero1);
} else if (operacao == 4) {
    printf("resultado: %.2f\n", numero / numero1); 
} 
else {
    printf("operacao invalida\n");
}


    return 0;
}