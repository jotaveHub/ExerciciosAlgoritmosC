/*Escreva um programa em C que leia uma matriz quadrada de ordem 5 de
números reais e calcule o valor da soma dos elementos de cada uma de suas
colunas.*/

#include<stdio.h>
const int ordem = 2;

int main () {
    float matriz[ordem][ordem];
    float soma_coluna;
    int i,j;

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for(j=0; j<ordem; j++) {
        soma_coluna = 0;
    for(i=0; i<ordem; i++) {
        soma_coluna = soma_coluna + matriz[i][j];
    }
    printf("A soma dos elementos da coluna %d eh:%.1f\n",j+1,soma_coluna);
}
    return 0;
}