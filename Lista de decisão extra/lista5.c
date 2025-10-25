#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Digite os coeficientes a b c (separados por espaco): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }
    if (a == 0.0) {
        
        if (b == 0.0) {
            if (c == 0.0)
                printf("Infinitas solucoes (identidade 0 = 0).\n");
            else
                printf("Sem solucao (equacao inconsistente).\n");
        } else {
            double x = -c / b;
            printf("Equacao linear. Raiz: %.2f\n", x);
        }
        return 0;
    }
    double delta = b*b - 4.0*a*c;
    if (delta > 0.0) {
        double r1 = (-b + sqrt(delta)) / (2.0 * a);
        double r2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Raizes reais e distintas:\n");
        printf("x1 = %.6f\n", r1);
        printf("x2 = %.6f\n", r2);
    } else if (delta == 0.0) {
        double r = -b / (2.0 * a);
        printf("Raiz real dupla:\n");
        printf("x = %.6f\n", r);
    } else {
        double real = -b / (2.0 * a);
        double imag = sqrt(-delta) / (2.0 * a);
        printf("Raizes complexas conjugadas:\n");
        printf("x1 = %.6f + %.6fi\n", real, imag);
        printf("x2 = %.6f - %.6fi\n", real, imag);
    }
    return 0;
}
