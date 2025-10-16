/*Escreva um programa que leia um número inteiro entre 1 e 12 correspondente a um mês do ano e verifique o trimestre a que este mês pertence.*/

#include <stdio.h>

int main () {
    int num;
    printf("Informe um numero inteiro entre (1 e 12):");
    scanf("%d",&num);

    if(num < 1 || num > 12) {
        printf("Informe um numero entre 1 e 12.\n");
    }
    else if(num <= 3) {
        printf("%d pertence ao primeiro trimestre.\n",num);
    }
    else if (num <= 6) {
        printf("%d pertence ao segundo trimestre.\n",num);
    }
    else if (num <= 9) {
        printf("%d pertence ao terceiro trimestre.\n",num);
    }
    else {
        printf("%d pertence ao quarto trimestre.\n",num);
    }
return 0;
}
