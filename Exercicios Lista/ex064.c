//Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou neutro.

#include <stdio.h>

int main () {
    int num;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);

    if(num > 0) {
        printf("%d eh inteiro positivo.\n",num);
    }
    else if(num < 0) {
        printf("%d eh inteiro negativo.\n",num);
    }
    else { 
        printf("%d eh neutro.\n",num);
    }
return 0;
}

