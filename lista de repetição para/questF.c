#include <stdio.h>

int main () {

char nome [90];
int idade;
char sexo;

for (int i=1; i<=20; i++) {
printf(" digite seu nome: ");
scanf ("%89s", nome);
printf(" digite sua idade: ");
scanf ("%d", &idade);   
printf(" digite seu sexo (m/f): ");
scanf (" %c", &sexo);
if ( idade >= 21 && (sexo == 'm' || sexo == 'M') ) {
    printf("%s vc atende aos requisitos\n" , nome);
  
}else {
    printf(" voce nao atende os requisitos \n");
}
}
    return 0;

}