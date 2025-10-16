/* Escreva um programa que leia dois vetores de dez números inteiros cada e gere um  
terceiro vetor correspondendo à soma dos dois vetores informados.*/

#include <stdio.h>
const int tamanho = 5;

int main () {
    int vetA[tamanho],vetB[tamanho],vetC[tamanho];
    int k,i,cont=0;
    for(k=0; k<tamanho; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&vetA[k]);
    }
    for(i=0; i<tamanho; i++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&vetB[i]);
    }
    for(k=0; k<tamanho; k++) {
        for(i=0; i<tamanho; i++) {
            vetC[cont++] = vetA[k] + vetB[k];
        }
    }
    for(k=0; k<tamanho; k++) {
        printf("%d",&vetC[k]);
}
return 0;
}