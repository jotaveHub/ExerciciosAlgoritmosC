/*Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem 
ascendente.*/

#include <stdio.h>

int main() {
    int k;
    printf("Todos os numeros de (1 a 100):\n");
    for (k = 1; k <= 100; k++) {
        printf("%d ", k);
    }
    return 0;
}