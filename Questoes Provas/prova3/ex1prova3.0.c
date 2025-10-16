/*Escreva um programa em C que leia um número inteiro N e verifique a quantidade de
algarismos desse número. A verificação deve ser feita por meio de um subprograma
recursivo. */

#include <stdio.h>
#include <stdlib.h>

int QntdAlgarismo (int num) {
    if ( num < 10) {
        return 1;
    }
    else {
       return 1 + QntdAlgarismo(num/10); 
    }
}

int main () {
    int num;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);
    printf("O numero %d tem %d algarismos.",num,QntdAlgarismo(num));
    return 0;
}
