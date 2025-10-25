#include <stdio.h>
#include <math.h>

int main() {
    float raio, altura, preco_lata;
    const float PI = 3.14159;
    const float LITROS_POR_METRO = 1.0/3.0;  
    const float LITROS_POR_LATA = 5.0;

    printf("Raio do tanque (metros): ");
    scanf("%f", &raio);
    
    printf("Altura do tanque (metros): ");
    scanf("%f", &altura);
    
    printf("Preco da lata de tinta (5 litros): R$ ");
    scanf("%f", &preco_lata);

    float area = 2 * PI * raio * altura + 2 * PI * raio * raio;
    

    float litros = area * LITROS_POR_METRO;
    
    
    int latas = ceil(litros / LITROS_POR_LATA);
    

    float custo = latas * preco_lata;

    printf("\nArea total: %.2f m2\n", area);
    printf("Quantidade de latas: %d\n", latas);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}