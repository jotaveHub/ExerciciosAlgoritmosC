/*Escreva um subprograma recursivo em C que receba como parâmetros dois vetores de dez números inteiros cada e um número inteiro X entre 0 e 9 e retorne quantas posições os dois vetores têm em comum a partir da posição X.*/

#include <stdio.h> 
#include <stdlib.h>
const int tamanho = 10;

int PosComum (int vetA[tamanho],int vetB[tamanho],int n) {
    if (n == tamanho-1) {
        return vetA[n] == vetB[n]; // compara posições em comum;
    }
    // return 1 + Poscomum(vetA,vetB,n+1);
    return (vetA[n] == vetB[n]) + PosComum(vetA,vetB,n+1);
} 

int main () {
    system("chcp 65001");
    int vetA[tamanho],vetB[tamanho],n;
    int k,j;

    for(k=0; k<tamanho; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&vetA[k]);
    }
    for(j=0; j<tamanho; j++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&vetB[j]);
    }
    printf("Informe a posição na qual você quer iniciar a comparação:");
    scanf("%d",&n);

    printf("Os vetores tem %d posições em comum.",PosComum(vetA,vetB,n));
    return 0;
}
