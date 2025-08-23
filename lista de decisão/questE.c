#include <stdio.h>
#include <math.h>

int main() {
int num1, num2;

printf("Digite o primeiro numero: ");
scanf("%d", &num1);

printf("Digite o segundo numero: ");
scanf("%d", &num2); 

if ( num1 > num2 )  {    
double resultado = pow ( num1,3);
    printf( "%.2f", resultado);
}
else {
double resultado = sqrt ( num2);
printf( "%.2f",resultado);
}

return 0;

}