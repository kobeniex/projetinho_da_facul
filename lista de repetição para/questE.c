#include <stdio.h>

int main () {

    int i;

    for (i=1; i<=10; i++) {
float numero;
printf("digite o %d° numero: ", i);
scanf ("%f", &numero);
if (numero > 0) {
    printf("a metade do numero e: %.2f \n", numero/2);
} else {
    printf(" por favor digite um numero positivo"); 
}



    }


    return 0;

}