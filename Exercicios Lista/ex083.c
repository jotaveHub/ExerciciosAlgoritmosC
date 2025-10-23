/*Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número
lido por extenso.*/

#include <stdio.h>

int main () {
    int num;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);

    switch(num) {
    case 1 : printf("Um.\n");break;;
    case 2 : printf("Dois.\n");break;
    case 3 : printf("Tres.\n");break;
    case 4 : printf("Quatro.\n");break;
    case 5 : printf("Cinco.\n");break;
    case 6 : printf("Seis.\n");break;
    case 7 : printf("Sete.\n");break;
    case 8 : printf("Oito.\n");break;
    case 9 : printf("Nove.\n");break;
    case 10: printf("Dez.\n");break;
    default : printf("Numero invalido.\n");
    }
    return 0;
}
