#include <stdio.h>

int main() {

int hr, min;

printf("digite a hora atual (0-23): ");
scanf("%d", &hr);

min = hr * 60;

printf(" desde o inicio do dia se passaram %d minutos", min);

 return 0;
}