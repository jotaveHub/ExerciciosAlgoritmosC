//Escreva um programa que leia dois números e determine se o segundo número é menor, igual ou maior que o primeiro.

#include <stdio.h>

int main() {
    int n1,n2;
    printf("Informe o primeiro numero:");
    scanf("%d",&n1);
    printf("Informe o segundo numero:");
    scanf("%d",&n2);

    if(n2<n1) {
        printf("%d eh menor que %d.\n",n2,n1);
    }
    else if(n2>n1) {
        printf("%d eh maior que %d.\n",n2,n1);
    }
    else { 
        printf("%d eh igual a %d.\n",n2,n1);
    }
return 0;
}
