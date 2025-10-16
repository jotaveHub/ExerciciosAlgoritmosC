/*Escreva um programa que leia dois vetores A e B de 5 números inteiros já ordenados 
e  gere  um  terceiro  vetor  também  ordenado  contendo  todos  os  elementos  dos  dois 
vetores lidos. O terceiro vetor deve ter todos os elementos dois vetores, incluindo as 
repetições.*/

#include <stdio.h>
const int tamanho=5;

int main () {
    int vetA[tamanho],vetB[tamanho],vetC[2*tamanho];
    int k,i,j;

    printf("\nInforme os vetores ja ordenados!\n");
    for(k=0;k<tamanho;k++) {
        printf("Indice %d:",k);
        scanf("%d",&vetA);
    }
    for(i=0;i<tamanho;i++) {
        printf("Indice %d:",k);
        scanf("%d",&vetB);
    }

}