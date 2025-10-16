/*Escreva um programa que leia uma matriz 4x4 de números inteiros e, em seguida, leia
um número inteiro N e verifique em quantas colunas da matriz o número N aparece.*/

#include <stdio.h>
const int ordem = 4;

int main () {
    int  matriz[ordem][ordem],i,j;
    int  numero;
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
            printf("Elemento[%d][%d]:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Informe um numero inteiro:");
    scanf("%d",&numero);
    int qntd_colunas = 0;
    for(j=0; j<ordem; j++) {
        for(i=0; i<ordem; i++) {
            if(matriz[i][j] == numero) {
                qntd_colunas++;
                break;
            }
        }
    }
        printf("O %d aparece em %d coluna(s).\n",numero,qntd_colunas);
return 0;
}