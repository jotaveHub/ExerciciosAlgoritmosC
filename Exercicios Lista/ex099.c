/*Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem 
descendente.*/

#include <stdio.h>

int main () {
    int k;
    printf("Todos os numeros de (1 a 100) de forma descendente:");
    for(k=100; k>=1; k--) {
            printf("%d. ",k);
        }
return 0;
}