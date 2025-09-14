#include <stdio.h>
int main() {

    int codigo;
    printf("Digite o codigo do produto (1 a 10): ");
    scanf("%d", &codigo);

    switch (codigo) {
    case 1:
    printf("a classificacao e: Alimento nao-perecivel\n");
    break;
    case 2:
    case 3:
    case 4:
    printf("a classificacao e: Alimento perecivel\n");
    break;
    case 5:
    case 6:
    printf("a classificacao e: Vestuario\n");
    break;  
    case 7:
    printf("a classificacao e: Higiene pessoal\n");
    break;
    case 8:
    case 9:
    case 10:
    printf("a classificacao e: Utensilios domesticos\n");
    break;
    default:
    printf("codigo invalido\n");
    break;
}


    return 0;
}