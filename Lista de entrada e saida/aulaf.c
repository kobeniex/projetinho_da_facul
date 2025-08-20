#include <stdio.h>

int main() {
char nom[100], ende[100];
float tel;

 printf("digite seu telefone: ");
    scanf("%f", &tel);

    printf("digite seu nome: ");
    scanf("%99s", nom);

    printf("digite seu endereco: ");
    scanf("%99s", ende);

   

printf(" seus dados de nome: %s endereco: %s e telefone sao: %f ", nom, ende, tel);


    return 0;
}