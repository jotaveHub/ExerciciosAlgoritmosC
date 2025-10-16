/*Escreva um programa que leia 10 números inteiros e calcule a quantidade de números
pares e a quantidade de números ímpares.*/

#include <stdio.h>

int main () {
 
    int k,num,pares=0,impares=0;

    for(k= 1 ; k <=10 ; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&num);
        if(num % 2 == 0) {
            pares++;
        }
        else if (num % 2 != 0) {
            impares++;
        }
    }
    printf("%d numeros pares, %d numeros impares.\n",pares,impares);

    return 0;
}
