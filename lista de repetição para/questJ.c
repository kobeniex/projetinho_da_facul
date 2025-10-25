// ...existing code...
#include <stdio.h>

int main() {
    int idade, opiniao;
    int total = 20;
    int soma_idades_ex = 0, cnt_ex = 0;
    int cnt_reg = 0;
    int cnt_bom = 0;

    for (int i = 1; i <= total; i++) {
        printf("Espectador %d - idade: ", i);
        scanf("%d", &idade);
        printf("Espectador %d - opiniao (3=excelente, 2=bom, 1=regular): ", i);
        scanf("%d", &opiniao);

        if (opiniao == 3) {
            soma_idades_ex += idade;
            cnt_ex++;
        } else if (opiniao == 2) {
            cnt_bom++;
        } else if (opiniao == 1) {
            cnt_reg++;
        }
    }

    if (cnt_ex > 0)
        printf("Media das idades (excelente): %.2f\n", (float)soma_idades_ex / cnt_ex);
    else
        printf("Nenhum espectador respondeu 'excelente'.\n");

    printf("Quantidade que respondeu 'regular': %d\n", cnt_reg);
    printf("Percentual que respondeu 'bom': %.2f%%\n", (cnt_bom * 100.0f) / total);

    return 0;
}
// ...existing code...