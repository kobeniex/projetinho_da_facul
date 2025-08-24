#include <stdio.h.>

int main () {

float salario, inss;

printf("digite seu salario: ");
scanf("%f", &salario);

if ( salario <= 600){
    printf("voce esta isento de imposto de renda");
}
else if ( salario > 600 && salario <= 1200){
inss = salario * 0.20;
    printf("seu salario com o desconto do inss ficara:%.2f ",salario - inss);
}
else if ( salario > 1200 && salario <= 2000){
    inss = salario * 0.25;
    printf("vseu salario com o desconto do inss ficara:%.2f ", salario - inss);
}
else {
    inss = salario * 0.30;
    printf("seu salario com o desconto do inss ficara:%.2f ",  salario - inss);
}


return 0;
}
