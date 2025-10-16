/*Escreva um programa que leia uma matriz 3x4 e imprima a posição do maior número
de cada uma das linhas da matriz informada.*/

#include <stdio.h>

const int linhas = 3;
const int colunas = 4;

int main() {
    int matriz[linhas][colunas], i, j;
    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < linhas; i++) {
        int maior_num = matriz[i][0];
        int pos = 0;
        for(j = 1; j < colunas; j++) {
            if(matriz[i][j] > maior_num) {
                maior_num = matriz[i][j];
                pos = j;
            }
        }

        printf("Maior elemento da linha %d esta na posicao [%d][%d] valor = %d\n", i, i, pos, maior_num);
    }

    return 0;
}
