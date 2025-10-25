#include <stdio.h>

int main() {
    int sala, capacidade, alunos;

    printf("Numero da sala: ");
    scanf("%d", &sala);

    printf("Capacidade da sala: ");
    scanf("%d", &capacidade);

    printf("Alunos matriculados: ");
    scanf("%d", &alunos);

    printf("\nSala %d | Capacidade: %d | Ocupadas: %d | %s\n", 
           sala, capacidade, alunos, 
           (alunos >= capacidade) ? "LOTADA" : "NAO LOTADA");

    return 0;
}