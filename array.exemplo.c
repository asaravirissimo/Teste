#include <stdio.h>

int main() {
    int numeros[5]; 
    int i;
    for (i = 0; i < 5; i++) {
        printf(" escreva o numero do indice %d: ", i);
        scanf("%d", &numeros[i]);
    }
    /*printf("escreva o primeiro numero: ");
    scanf("%d", &numeros[0]);
    printf("escreva o segundo numero: ");
    scanf("%d", &numeros[1]);
    printf("escreva o terceiro numero: ");
    scanf("%d", &numeros[2]);
    printf("escreva o quarto numero: ");
    scanf("%d", &numeros[3]);
    printf("escreva o quinto numero: ");
    scanf("%d", &numeros[4]); */

    for (i = 0; i < 5; i++) {
        printf("o indice %d eh o numero:%d\n", i, numeros[i]);
    }
    /*printf("primeiro numero:%d\n", numeros[0]);
    printf("Segundo numero:%d\n", numeros[1]);
    printf("terceiro numero:%d\n", numeros[2]);
    printf("quarto numero:%d\n", numeros[3]);
    printf("quinto numero:%d\n", numeros[4]);*/
    return 0;
}