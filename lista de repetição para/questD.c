#include <stdio.h>

int main () {

    int i;
int soma = 0;

    for (i=1; i<=100; i++) {
        soma += i;
printf("%d \n", i);
    }
printf("a soma dos numeros de 1 a 100 e: %d", soma);

return 0;
}