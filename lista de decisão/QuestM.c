#include <stdio.h>

int main() {

int numero;

printf("digite um numero do mes (1 a 12): ");
scanf("%d", &numero);

if ( numero == 1) {
    printf("janeiro");
} else if ( numero == 2) {
    printf("fevereiro");    
} else if ( numero == 3) {
    printf("marco");
} else if ( numero == 4) {
    printf("abril");
} else if ( numero == 5) {
    printf("maio"); 
} else if ( numero == 6) {
    printf("junho");    
} else if ( numero == 7) {
    printf("julho");    
} else if ( numero == 8) {
    printf("agosto");   
} else if ( numero == 9) {
    printf("setembro");
} else if ( numero == 10) {
    printf("outubro");  
} else if ( numero == 11) {
    printf("novembro");
} else if ( numero == 12) {
    printf("dezembro");
} else { 
    printf("nao existe mes com esse numero");
}






    return 0;
}