/*Escreva  um  programa  que  leia  um  numero  inteiro  e  verifique  se  ele  e  multiplo  de  4  ou  termina
com o digito 4.*/

#include <stdio.h>

int main () {
    int num;

    printf("Informe um numero inteiro:");
    scanf("%d",&num);

    if(num % 4 ==0) {
        printf("%d eh multiplo de 4.\n",num);
    }
    printf("\n");
    if (num % 10 ==4) {
        printf("%d termina com o digito 4.\n",num);
    }
    return 0;
}