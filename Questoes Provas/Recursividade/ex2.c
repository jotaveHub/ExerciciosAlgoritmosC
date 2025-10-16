/*Escreva um subprograma recursivo que receba como entrada um vetor de 10 
números  inteiros  e  um  número  inteiro  N  entre  1  e  10  e  calcule  a  soma  de  todos  os 
elementos do vetor a partir da posição N.*/

#include <stdio.h>
#include <stdlib.h>
const int tamanho = 10;

int somaVetor(int vet[tamanho],int n) {
    if (n == tamanho -1) {
        return vet[n];
    }
    return vet[n] + somaVetor(vet,n+1);
}

int main () {
    system ("chcp 65001");
    int vet[tamanho];
    int n,k;
    for(k=0; k<tamanho; k++) {
        printf("Informe um número inteiro:");
        scanf("%d",&vet[k]);
    }
    printf("Informe a posição a partir da qual você quer realizar a soma:");
    scanf("%d",&n);
    for(k=0; k<tamanho; k++) {
        printf("%d ",vet[k]);
    }
    printf("\nA soma é: %d",somaVetor(vet,n-1));
    return 0;
}