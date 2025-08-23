#include <stdio.h>

int main (){ 

int i;
int valores [20];
int soma = 0;

for( i = 0; i < 20; i++){
printf("digite o valor: %d\n", i+1);
scanf("%d", &valores[i]);


soma += valores[i];
}

printf("a soma dos valores e: %d\n", soma);



    return 0;
}