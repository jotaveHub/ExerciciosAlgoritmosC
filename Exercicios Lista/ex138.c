/*Escreva um programa que leia um número inteiro positivo e calcule a soma de todos os seus algarismos.*/

#include <stdio.h>

int main () {
    int num, soma = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    while (num != 0) {
        soma = soma + num % 10; 
        num = num / 10; 
    }

    printf("A soma dos algarismos eh: %d\n", soma);

    return 0;
}