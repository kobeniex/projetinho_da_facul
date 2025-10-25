#include <stdio.h>

int main () {

int i, a, b, c;
float media;

printf("digite um valor inteiro e positivo: ");
scanf("%d", &i);

printf("digite tres valores ( a, b e c) ");
scanf("%d %d %d", &a, &b, &c);
if (i <= 0) {
    printf("O valor de i deve ser positivo e maior que zero");
    return 1;
}
if ( i % 2 == 0) {
    media = (float)( a + b + c ) / 3;
    printf("a media dos tres valores e: %.2f", media);
}
else if ( i > 10) {
    media = (float)(a * 2 + b * 3 + c * 4)/9;
    printf("a media ponderada dos tres valores e: %.2f", media);
}

return 0;

}