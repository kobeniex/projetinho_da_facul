#include <stdio.h>

int main()
{
    int num, anti, su;

    printf(" digite um numero: ");
    scanf("%d", &num);

    anti = num - 1;
    su = num + 1;

    printf(" o sucessor e: %d e o antecessor e: %d", su, anti);
    
    return 0;
}