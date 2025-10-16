/*Escreva um programa que leia um numero inteiro N e desenhe um triangulo de altura N, usando
'*'.
Exemplo para N = 3:
*
**
***.
*/

#include <stdio.h>

int main () {
    int num,k;

    printf("Informe um numero inteiro:");
    scanf("%d",&num);

    for(k=1 ; k<=num; k++) {
        for(int i =1 ; i<=k ; i++){
            printf("*");
        }
    printf("\n");
}
return 0;
}