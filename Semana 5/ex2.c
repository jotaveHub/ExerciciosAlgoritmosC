//Escreva um programa que leia 10 números inteiros e, para cada valor informado, informe se ele é positivo, negativo ou neutro. Ao fim da leitura, o programa deve informar qual dessas categorias teve uma maior quantidade de números informados.

#include <stdio.h>

int main () {
    int num,k,positivo=0,negativo=0,neutro=0;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);

    for(k = 1 ; k <=10 ; k++) {
        printf("Informe um numero inteiro:");
        scanf("%d",&num);
        if(num > 0) {
            positivo++; 
        }
        else if(num < 0){
            negativo++;
        }
        else {
            neutro++;
        }
        }
    if(positivo > negativo && positivo > neutro) {
        printf("A categoria com mais numeros informados foi positivo.\n");
    }
    else if (negativo > positivo && negativo > neutro) {
        printf("A categoria com mais numeros informados foi negativo.\n");
    }
    else {
        printf("A categoria com mais numeros informados foi neutro.\n");
    }
    return 0;
}
