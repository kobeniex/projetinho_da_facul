#include <stdio.h>
int main () {
float salario, novoSalario;
int cargo;
printf("digite seu cargo, 1- para professor, 2 para mecanico, 3 para outro: ");
scanf("%d", &cargo);
printf("digite seu salario: ");
scanf("%f", &salario);
switch ( cargo) {
    case 1:
    novoSalario = salario + (salario * 0.50);
    printf ("  seu salaraio era: %.2f agora seu novo salario e: %.2f " , salario,novoSalario);
    break;
    case 2:
    novoSalario = salario + ( salario * 0.30);
    printf ("  seu salaraio era: %.2f agora seu novo salario e: %.2f " , salario,novoSalario);
    break;
    case 3:
    novoSalario = salario + ( salario * 0.10);
    printf ("  seu salaraio era: %.2f agora seu novo salario e: %.2f " , salario,novoSalario);
    break;
    default:

    printf(" cargo invalido " );
}
return 0;
}

