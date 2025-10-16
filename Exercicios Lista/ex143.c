/*Escreva um programa que leia dez números inteiros e calcule a diferença entre os dois maiores números digitados pelo usuário*/

#include <stdio.h>

int main () {
    int num,k,maior1,maior2;

    maior1 = num;
    maior1 = maior2;

    for(k=1 ; k<=10 ; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d", &num);

        if(num > maior1) {
            maior2 = maior1;
            maior1 = num;
        }
        else if (num > maior2) {
            maior2 = num;
        }
    }
    printf("A diferenca entre os dois maiores numeros eh: %d\n", maior1 - maior2);
    return 0;
}