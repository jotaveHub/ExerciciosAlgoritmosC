/*Escreva um programa que leia duas matrizes quadradas de ordem 3 de números
inteiros e gere uma terceira matriz representando a soma das duas matrizes
informadas.*/

#include <stdio.h>
const int ordem = 5;

int main () {
    int matriz1[ordem][ordem], matriz2[ordem][ordem],matriz_soma[ordem][ordem];
    int i, j;
    printf("\n Informe a Primeira matriz:\n");
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("\n Informe a Segunda matriz:\n");
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("\nA soma das matrizes informadas eh:\n");
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            printf("%4d",matriz_soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}


   