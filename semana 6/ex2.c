/*Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todas as posições em que o número N
aparece dentro do vetor.*/

#include <stdio.h>
const int tamanho = 10;

int main () {
    int vet[tamanho],k;
    for(k=0; k<tamanho; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&vet[k]);
    }
    int num,encontrado = 0;
    printf("Informe o numero entre [1 e 10]:");
    scanf("%d",&num);
    for(k=0; k<tamanho; k++) {
    if(num == vet[k]) {
        printf("O numero %d foi encontrado na posicao %d\n", num, k + 1);
        encontrado = 1;
    }
    if (encontrado == 0) {
        printf("O numero %d nao foi encontrado em nenhuma posicao do vetor.\n", num);
    }
}
    
}