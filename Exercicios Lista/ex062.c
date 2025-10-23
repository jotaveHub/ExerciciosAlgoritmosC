//Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo de M.

#include <stdio.h>

int main () {
    int n1,n2;
        printf("Informe o primeiro numero:");
        scanf("%d",&n1);
        printf("Informe o segundo numero:");
        scanf("%d",&n2);

    if(n2 % n1 == 0) {
        printf("%d eh multiplo de %d",n1,n2);
    }
    else {
        printf("%d nao eh multiplo de %d",n1,n2);
    }
return 0;
}

