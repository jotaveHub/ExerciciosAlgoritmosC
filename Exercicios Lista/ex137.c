/*Escreva um programa que leia um número inteiro positivo e calcule o número de algarismos deste número*/


#include <stdio.h>

int main () {
    int num,algarismo=0;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);

    int resto=num;
    do {
        resto = resto / 10;
        algarismo+=1;
    }
    while(resto!=0);
    printf("O numero %d tem %d algarismos.\n",num,algarismo);
    return 0;
}