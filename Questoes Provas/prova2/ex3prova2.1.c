/*Escreva um programa em C que leia uma matriz quadrada de ordem 5 de
números inteiros e um número inteiro N e verifique em quantas linhas da matriz
o número N aparece. */

#include <stdio.h>
const int ordem = 5;

int main () {
    int matriz[ordem][ordem],num;
    int i,j;
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            printf("informe o elemento[%d][%d]:",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Informe um numero inteiro:");
    scanf("%d",&num);
    int qntd_linhas=0;
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            if(num==matriz[i][j]) {
                qntd_linhas++;
                break;
            }
        }
    }
    printf("O numero %d aparece em %d linhas da matriz.\n",num,qntd_linhas);
}