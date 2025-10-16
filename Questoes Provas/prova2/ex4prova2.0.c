/*Escreva um programa em C que leia dois vetores de 5 números inteiros e cada e
imprima os números que aparecem no primeiro vetor mas não aparecem no
segundo. Você pode supor que dentro de um mesmo vetor não há números
repetidos.*/

#include <stdio.h>
const int tamanho = 5;

int main () {
    int vetA[tamanho],vetB[tamanho];
    int k,i,encontrado;
    for(k=0;k<tamanho;k++) {
        printf("Indice %d:",k);
        scanf("%d",&vetA[k]);
    }
    for(i=0;i<tamanho;i++) {
        printf("Indice %d:",i);
        scanf("%d",&vetB[i]);
  }
  for(k=0;k<tamanho; k++) {
    encontrado = 0;
    for(i=0; i<tamanho; i++) {
        if(vetA[k] == vetB[i]) {
            encontrado = 1;
            break;
        }
    }
    if(!encontrado) {
        printf("%d ", vetA[k]);
    }
  }
    return 0;
}
