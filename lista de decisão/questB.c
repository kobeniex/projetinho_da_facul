#include <stdio.h>

int main(){

int numero;

printf(" digite um numero : ");
scanf("%d", &numero);

if ( numero > 20 ) {
    printf(" a metade de %d e: %d ", numero, numero  / 2 );
}

if ( numero <= 20 ){

printf(" a quinta parte de %d e: %d ", numero, numero  / 5 );
}


    return 0;
}