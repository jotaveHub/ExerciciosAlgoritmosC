/*Escreva um programa que imprima todos os palíndromos que existem no intervalo
[1000,9999].*/

#include <stdio.h>

int main () {
    int k,terceiro,primeiro,segundo,ultimo;
    for (k=1000 ; k <=9999 ; k++) {
        primeiro = k / 1000;
        segundo = k % 1000 / 100;
        terceiro = k % 100 / 10;
        ultimo = k % 10;

        if(primeiro == ultimo && segundo == terceiro) {
            printf("%d ",k);
        }
    }
    return 0;
}
