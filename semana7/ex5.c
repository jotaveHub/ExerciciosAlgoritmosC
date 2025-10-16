/*Escreva um programa que leia uma matriz quadrada de números inteiros e verifique se
ela é simétrica. A matriz é considerada simétrica se Ai,j=Aj,i para todos os seus
elementos.*/

#include <stdio.h>

int main() {
    int linhas, colunas, i, j;
    printf("Informe o numero de linhas e colunas da matriz quadrada: ");
    scanf("%d %d", &linhas, &colunas);
    

    int matriz[linhas][colunas];
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                printf("A matriz nao eh simetrica.\n");
                return 1;
            }
        }
    }
    printf("A matriz eh simetrica.\n");
    return 0;
}
