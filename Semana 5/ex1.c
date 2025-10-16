/*Escreva um programa que imprima todos leia um número inteiro N e imprima os dez primeiros termos da sua tabuada no formato abaixo. No exemplo abaixo, considerou se que o valor de N é 5.
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
....
5 x 10 = 50*/
#include <stdio.h>

int main () {
    int num,termo = 0 ,resultado;
    int k;
    printf("Informe um numero inteiro :");
    scanf("%d",&num);

    printf("\nTabuada do %d\n",num);
    for(k = 1 ; k <= 10 ; k++) {
        termo++;
        resultado = (num * termo);
        printf("%d x %d = %d\n",num,termo,resultado);
    }
return 0;
}
