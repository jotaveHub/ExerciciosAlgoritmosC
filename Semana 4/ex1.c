/*'Escreva um programa que leia um número inteiro positivo N e calcule a soma de todos
os números inteiros menores ou iguais a 'N*/

#include <stdio.h>

int main () {
    int k,N;
    int soma=0;

    printf("Informe um numero inteiro N:");
    scanf("%d",&N);

    if(N < 0) {
        printf("Valor invalido.Por favor digite um numero inteiro positivo");
        return 1;
    }

    for(k =1; k <= N; k++) {
        soma = soma + k;
    }

    printf("A soma de todos os numeros inteiros menores igual a %d eh = %d",N,soma);
return 0;
}
