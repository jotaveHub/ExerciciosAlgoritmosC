/*  Escreva  um  programa  que  leia  três  números  inteiros  distintos  e  identifique  o  maior 
número lido.*/

#include <stdio.h>
#include <stdlib.h>

int MaiorNumero (int n1, int n2, int n3) {
    int maior = n1;
    if(n2>n1 && n2>n3) {
        maior = n2;
    }
    else if (n3>n1 && n3>n2) {
        maior = n3;
    }
    return maior;
}

int main() {
    system("chcp 65001");
    int n1 = 19;
    int n2 = 3;
    int n3 = 7;
    printf("O maior número lido é:%d\n",MaiorNumero(n1,n2,n3));
    
    system("pause");
    return 0;
}