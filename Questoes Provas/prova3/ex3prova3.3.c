/*Escreva um subprograma recursivo que receba como entrada um número inteiro N não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N é igual a 5:*/

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