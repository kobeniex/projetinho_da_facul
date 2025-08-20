#include <stdio.h>

int main(){
float val, tx, pres;
int tempo;

printf(" digite o valor da prestacao: ");
scanf("%f", &val);

printf(" digite a taxa de juros (em %%): ");
scanf("%f", &tx);

printf("digite o tempo de atraso em meses: ");
scanf("%d", &tempo);


pres = val + ( val * (tx / 100) * tempo);

printf("o valor da prestacao com juros e: %.2f", pres);

    return 0;
}