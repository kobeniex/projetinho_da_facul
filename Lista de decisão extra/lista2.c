#include <stdio.h>

int main() {

  int cp;
  float pe; 
    printf("digite o codigo de pagamento (1-4): ");
    scanf("%d", &cp);  
 switch (cp) {
    case 1:
    printf("a vista em dinehiro ou cheque tem 10 porcento de desconto\n");
    printf("digite o preco do produto: ");
    scanf("%f", &pe);
    pe = pe - (pe * 0.10);
    printf(" o preco com desconto e: %.2f\n", pe);
    break;
    case 2:
    printf(" a vista com cartao de credito tem 5%% de desconto\n");
    printf("digite o preco do produto: ");
    scanf("%f", &pe);
    pe = pe - (pe * 0.05);
    printf(" o preco com desconto e: %.2f\n", pe);
    break;
    case 3:
    printf(" em duas vezes sem juros\n");
    printf("digite o preco do produto: ");
    scanf("%f", &pe);
    printf(" o preco final e: %.2f\n", pe);
    printf(" o valor de cada parcela e: %.2f\n", pe / 2);
    break;
    case 4:
    printf(" em duas vezes com juros de 10 porcento\n");   
    printf("digite o preco do produto: ");
    scanf("%f", &pe);
    pe = pe + (pe * 0.10);
    printf(" o preco final e: %.2f\n", pe);
    printf(" o valor de cada parcela e: %.2f\n", pe / 3);
    break;
    default:
    printf(" codigo invalido\n");
    break;
    }
 
    return 0;
}