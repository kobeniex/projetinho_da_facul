#include <stdio.h>

int main() {

int gol1, gol2;
char time1[50], time2[50];

printf("digite o primeiro time que esta jogando: ");
scanf("%s", time1);
printf("digite o segundo time que esta jogando: ");
scanf("%s", time2);

printf("digite quantos gols o time %s fez: ", time1);
scanf("%d", &gol1);
printf("digite quantos gols o time %s fez: ", time2);
scanf("%d", &gol2);

if (gol1 > gol2) {
    printf("o time %s ganhou o jogo de %d a %d\n", time1, gol1, gol2);
}
else if (gol2 > gol1) {
    printf("o time %s ganhou o jogo de %d a %d\n", time2, gol2, gol1);
}
else {
    printf("o jogo terminou empatado em %d a %d\n", gol1, gol2);

}

    return 0;
}