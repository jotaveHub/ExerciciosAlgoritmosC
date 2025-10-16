/*Escreva um progama que leia uma matriz quadrada de ordem 100 de numeros reais e identifique a posição do maior numero de cada linha da matriz*/

#include <stdio.h>
const int ordem = 100;

int main() {
    float matriz[ordem][ordem];
    int i, j;

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);        
        }
    }
    for (i = 0; i < ordem; i++) {
        float maior_num = matriz[i][0];
        int posicao = 0;
        for (j = 1; j < ordem; j++) {
            if (matriz[i][j] > maior_num) {
                maior_num = matriz[i][j];
                posicao = j;
            }
        }
        printf("Linha %d: maior valor = %.2f na coluna %d\n", i + 1, maior_num, posicao);
    }
    return 0;
}
