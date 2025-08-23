#include <stdio.h.>

int main () {

float salario;

printf("digite seu salario: ");
scanf("%f", &salario);



if ( salario <= 600){
    printf("voce esta isento de imposto de renda");
}
else if ( salario > 600 && salario <= 1200){
    printf("voce pagara 20%% de imposto de renda");
}
else if ( salario > 1200 && salario <= 2000){
    printf("voce pagara 25%% de imposto de renda");
}
else {
    printf("voce pagara 30%% de imposto de renda");
}


return 0;
}