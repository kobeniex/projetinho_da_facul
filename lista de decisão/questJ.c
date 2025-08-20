#include <stdio.h>
int main () {

float salario, limite, valor_emprestimo, parcelas, prestacao;


printf("digite seu salario: ");
scanf(" %f", &salario);

printf("digite o valor que deseja no emprestimo: ");
scanf(" %f", &valor_emprestimo);

printf("digite quantas parcelas deseja( parcelas sem juros compostos): ");
scanf(" %f", &parcelas);

limite = salario * 0.25;

prestacao = valor_emprestimo/ parcelas;

printf("valor da prestacao calculada:  %.2f\n", prestacao);
printf("limite permitido (25%% do salario): %.2f\n", limite);

if ( prestacao <= limite)
printf("prestacao aceita com sucesso caro cliente");

else 
printf("valor da prestacao negado devido a prestacao maior que o limite estabelecido, por favor entrar em contato");




 return 0;
}