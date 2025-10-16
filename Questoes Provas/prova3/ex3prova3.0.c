/*Escreva um programa em C que leia um número inteiro N positivo e imprima a figura
abaixo. A impressão deve ser realizada por meio de um subprograma recursivo.*/

#include <stdio.h>
#include <stdlib.h>

void imprimirLinha(int n) {
    if (n > 0) {
        imprimirLinha(n - 1);
        printf("*");
    }
}

void imprimirTriangulo(int n) {
    if (n > 0) {
        imprimirTriangulo(n - 1);
        imprimirLinha(n);
        printf("\n");
    }
}

int main() {
    system("chcp 65001"); 
    int N;
    printf("Informe um numero inteiro:");
    scanf("%d", &N);

    imprimirTriangulo(N);

    return 0;
}

