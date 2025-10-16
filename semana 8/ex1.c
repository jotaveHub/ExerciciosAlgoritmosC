/*Escreva um programa que leia três números inteiros e calcule a sua média aritmética. O
cálculo da média deve ser realizado através de um subprograma.*/

#include <stdio.h>
#include <stdlib.h>

int media (float num1,float num2,float num3) {
    float calculoMedia = (num1 + num2 + num3) / 3.0;
    return calculoMedia;
}

int main () {
    system("chcp 65001");
    float num1,num2,num3;
    printf("Informe o primeiro, segundo e terceiro número:");
    scanf("%f %f %f",&num1,&num2,&num3);

    printf("O calculo da média dos 3 números informados é: %.2f",media(num1,num2,num3));
    return 0;
}