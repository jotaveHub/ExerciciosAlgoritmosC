/*Escreva  um  programa  que  leia  um  número  N  e  imprima  os  N  primeiros  números 
primos positivos. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ImprimirPrimos (int num) {
    int k, i;
    int cont = 0;
    
    for (k = 2; cont < num; k++) {
        int divisores = 0;
        for (i = 1; i <= k; i++) {
            if (k % i == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            printf("%d ", k);
            cont++;
        }
    }
}

int main() {
    system("chcp 65001");
    int num;
    printf("Informe a quantidade de números primos a serem impridos:");
    scanf("%d",&num);

    ImprimirPrimos(num);
    printf("\n");

    system("pause");
    return 0;
}
