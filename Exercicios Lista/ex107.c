/*Escreva um programa que leia dois números inteiros M e N e calcule a média aritmética dos números primos do intervalo [M, N].*/

//media = soma_primos / primos


#include <stdio.h>

int main () {
    int minimo,limite,k,i;
    printf("Informe o valor de M:");
    scanf("%d",&minimo);
    printf("Informe o valor de N:");
    scanf("%d",&limite);

    int divisores=0;
    int primos=0;
    int soma_primos=0;

    for(k = minimo ; k <= limite ; k++) {
        divisores = 0;
        for(i = 1 ; i <= k ; i++ ) {
            if(k % i == 0) {
                divisores++;
            }
        }  
        if(divisores == 2) {
            primos++;
            soma_primos = soma_primos + k; 
        }   
    }
    
        float media = (float)soma_primos / primos;
        printf("A media dos numeros eh:%.2f\n",media);
    return 0;
}