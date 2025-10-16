/*Escreva um programa que leia uma matriz 6x10 de caracteres, na qual a primeira linha
representa o gabarito de uma prova e cada uma das demais linhas representa o cartão
de respostas de um candidato, e calcule o número de acertos de cada candidato.*/

#include <stdio.h>

const int linhas = 6;
const int colunas = 10;

int main () {
    char matriz[linhas][colunas];
    int i, j;
    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]);
        }
    }
    for (i = 1; i < linhas; i++) {
        int acertos = 0;
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] == matriz[0][j]) {
                acertos++;
            }
        }
        printf("Candidato %d acertou %d de 10 questões.\n", i, acertos);
    }

    return 0;
}


