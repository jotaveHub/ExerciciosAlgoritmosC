/*Escreva um programa que leia um número natural N e calcule o seu fatorial.*/

#include <stdio.h>

int main () {
     int num,k;
     printf("Informe um numero natural:");
     scanf("%d",&num);
    
     int fatorial=1;

     for(k = num ; k >= 2 ; k--) {
        fatorial = fatorial *k;
     }
     printf("O fatorial de %d eh %d",num,fatorial);
     return 0;
}