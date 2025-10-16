/*Escreva um programa que leia dois números inteiros M e N e imprima todos os números primos existentes no intervalo [M, N].*/

#include <stdio.h>

int main () {
    int minimo,limite,k;
    printf("Informe o valor de M:");
    scanf("%d",&minimo);
    printf("Informe o valor de N:");
    scanf("%d",&limite);

    int divisores=0;

    for(k=minimo; k<=limite; k++) {
        divisores=0;
        for(int i=1 ; i<=k; i++) {
            if(k % i == 0) {
                divisores++;
            }
        }
        if(divisores == 2) {
            printf("%d ",k);
        }        
    }
    return 0;
}