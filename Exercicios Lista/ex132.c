/* Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N 
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
considerado que N=5. 
***** 
  **** 
    *** 
      ** 
        * 
*/

#include <stdio.h>

int main () {
    int num,k;

    printf("Informe um numero inteiro positivo:");
    scanf("%d",&num);

    for(k=num; k>=1; k--) {
        for(int i=1; i<=k;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}