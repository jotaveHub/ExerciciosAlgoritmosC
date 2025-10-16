/*Escreva um programa em C que leia dois vetores vetaA e vetB de cinco números  
inteiros cada e gere um terceiro vetor vetC de 10 números. O vetor vetC deve ser  
preenchido intercalando-se (seguindo estritamente a ordem dos valores nos dois  
vetores), em cada posição, um valor do vetor vetA e um valor do vetor vetB. Por  
exemplo, se os dois vetores tiverem os valores {2, 4, 8, 10, 15} e {1, 5, 7, 9, 13}, o 
terceiro  vetor deve ser {2, 1, 4, 5, 8, 7, 10, 9, 15, 13}*/

#include <stdio.h>
const int tamanho = 5;

int main () {
    int vetA[tamanho],vetB[tamanho],vetC[tamanho*2];
    int k,cont=0;
    for(k=0; k<tamanho; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&vetA[k]);
    }
    for(k=0; k<tamanho; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&vetB[k]);
    }
    for(k=0; k<tamanho; k++) {
        vetC[cont++] = vetA[k];
        vetC[cont++] = vetB[k];
    }
    for (k=0; k<tamanho * 2; k++) {
        printf("%d",vetC[k]);
    }
    return 0;
}
