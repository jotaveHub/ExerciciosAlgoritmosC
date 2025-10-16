/*Escreva  um  subprograma  recursivo  que  receba  como  entrada  um  número  inteiro  N 
positivo e provoque um salto de N linhas na tela do usuário. */

#include <stdio.h>
#include <stdlib.h>

void PularLinha (int num) {
    if (num==1) {
        printf("\n");
    }
    else if (num>1) {
        printf("\n");
        PularLinha(num-1);
    }
}

int main () {
    system("chcp 65001");
    int num;
    printf("Informe um número inteiro:");
    scanf("%d",&num);
    PularLinha(num);
    return 0;
}


