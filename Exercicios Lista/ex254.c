/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x 
e y e calcule o valor do produto de x por y.*/

#include <stdio.h>

int ProdutoRecursivo (int x, int y) {
    if(y == 0 ) {
        return 0;
    }
    return x + ProdutoRecursivo(x,y-1); 
}

int main () {
    int num1,num2;
    i
}