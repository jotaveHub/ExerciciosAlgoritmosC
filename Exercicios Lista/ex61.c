//Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O valor absoluto deve ser calculado sem o uso de qualquer função oferecida pela linguagem.

#include <stdio.h>

int main () {
    int num;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);
    
    if(num < 0) {
    int valor_absoluto = num * -1;
        printf("O valor absoluto de %d eh |%d|.\n",num,valor_absoluto);
    }
    else {
        printf("O valor absoluto de %d eh |%d|.\n",num,num);
    }
return 0;
}
