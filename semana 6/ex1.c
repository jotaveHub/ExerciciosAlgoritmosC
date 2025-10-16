/*Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
usuário.*/

#include <stdio.h>
const int tamanho = 10;

int main () {
    int vet[tamanho],k;
    for(k=0; k<tamanho; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&vet[k]);
    }
    int num;
    printf("Informe o numero entre [1 e 10]:");
    scanf("%d",&num);
    printf("O %d° numero informado foi:%d\n",num,vet[num - 1]);
    return 0;
}