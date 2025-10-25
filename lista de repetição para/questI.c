#include <stdio.h>

int main() {
    int id, id_max = 0, id_min = 0;
    float peso, peso_max = 0.0f, peso_min = 0.0f;

    for (int i = 1; i <= 5; i++) {
        printf("Ovelha %d - digite identificacao (numero): ", i);
        scanf("%d", &id);
        printf("Ovelha %d - digite peso (kg): ", i);
        scanf("%f", &peso);

        if (i == 1) {             
            peso_max = peso;
            peso_min = peso;
            id_max = id;
            id_min = id;
        } else {
            if (peso > peso_max) {
                peso_max = peso;
                id_max = id;
            }
            if (peso < peso_min) {
                peso_min = peso;
                id_min = id;
            }
        }
    }

    printf("\nOvelha mais pesada: id %d, peso %.2f kg\n", id_max, peso_max);
    printf("Ovelha mais leve:   id %d, peso %.2f kg\n", id_min, peso_min);

    return 0;
}