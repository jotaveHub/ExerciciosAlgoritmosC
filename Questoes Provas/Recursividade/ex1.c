/*Escreva  um  subprograma  recursivo  que  receba  como  parâmetros  de  entrada  dois 
números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>

int somaIntervalo (int min,int max) {
    if(min == max) {
        return min;
    }
    if(max < min) {
        return somaIntervalo(max, min);
    }
    return min + somaIntervalo(min + 1,max);
 }

 int main () {
    system ("chcp 65001");
    int min,max;
    printf("Informe os limites do intervalo [Min,Max]:");
    scanf("%d %d",&min,&max);

    printf("O resultado da soma do intervalo é:%d",somaIntervalo(min,max));
    return 0;
 }
