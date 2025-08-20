#include <stdio.h>

int main(){

int num1, num2;

printf("digite um numero: ");
scanf("%d", &num1);

printf("digite outro numero: ");
scanf("%d", &num2);

if ( num1 > num2 ) {
    printf("%d", num1);
}

if ( num1 < num2 ) {
    printf("%d", num2);
}



    return 0;

}