/*Escreva um programa que leia uma matriz quadrada de ordem 3 de números inteiros e
verifique quantas linhas nulas existem na matriz.*/

#include <stdio.h>
const int ordem =3;

int main () {
    int matriz[ordem][ordem],i,j;
    int linhas_nulas = 0;
    for(i=0; i<ordem; i++) {
        for(j=0; j<ordem; j++) {
        printf("Elemento[%d][%d]:",i,j);
        scanf("%d",&matriz[i][j]);        
        }
    }
    for(i=0; i<ordem; i++) {
        int zeros_na_linha = 0;
        for(j=0; j<ordem; j++) {
            if(matriz[i][j] == 0) {
                zeros_na_linha++;
            }
        }
        if(zeros_na_linha == ordem) {
            linhas_nulas++;
        }
    } 
    printf("Existem na matriz %d linhas nulas.\n",linhas_nulas);
    return 0;
}