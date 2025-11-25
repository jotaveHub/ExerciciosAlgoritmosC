/*Escreva  um  programa  que  leia  um  número  inteiro  N  e  imprima  o  enésimo  termo  da 
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).*/

#include <stdio.h>
#include <stdlib.h>

int EnesimoTermo (int num) {
    int anterior = 1;
    int atual = 1;
    int prox;
    for(int k = 3; k<=num; k++) {
        prox = anterior + atual;
        anterior = atual;
        atual = prox;
    }
    return prox;
}

int main() {
    system("chcp 65001");
    int num;
    printf("informe um número:");
    scanf("%d",&num);

    if(num == 1 || num == 2) {
        printf("O enésimo termo é 1.\n");
        return 1;
    }
    printf("O enésimo termo da série de fibonacci é: %d\n",EnesimoTermo(num));
    
    system("pause");
    return 0;
}