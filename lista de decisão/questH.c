#include <stdio.h> 

int main(){

char nome[50];
int idade;
char sexo;

printf(" Digite seu nome: ");
scanf("%s", nome);

printf(" Digite sua idade: ");
scanf("%d", &idade);

printf(" Digite seu sexo ( m ou F): ");
scanf(" %c", &sexo);

    if ( idade <= 35 &&( sexo == 'm' || sexo == 'M' ) ) {

printf("Ola %s, vc esta aceito  ", nome);
    }
else 
printf("Ola %s, vc nao esta aceito", nome);

return 0;

}