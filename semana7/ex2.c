/*Escreva um programa que leia uma matriz quadrada de ordem 3 de números inteiros
e um número inteiro N e multiplique a matriz informada pelo número N.*/

#include <stdio.h>
const int ordem = 3;

int main () {
    int matriz[ordem][ordem], i, j,num;
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            printf("Informe um numero inteiro:");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Informe o numero que deseja multiplicar pela matriz:");
    scanf("%d",&num);
    int matriz_multiplicada[ordem][ordem];
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            matriz_multiplicada[i][j] = num * matriz[i][j];
        }
    }
    printf("\n A matriz multiplicada por %d eh igual a:\n",num);
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            printf("%d ",matriz_multiplicada[i][j]);
        }
        printf("\n");
    }
    return 0;
}

