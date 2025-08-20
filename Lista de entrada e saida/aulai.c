#include <stdio.h>

int main() {
    int divid, div, quoc, rs;

    printf("Digite o dividendo: ");
    scanf("%d", &divid);

    printf("Digite o divisor: ");
    scanf("%d", &div);

    quoc = divid / div;
    rs = divid % div;

    printf("dividendo: %d\n", divid);
    printf("divisor: %d\n", div);
    printf("quociente: %d\n", quoc);
    printf("resto: %d\n", rs);

    return 0;
}