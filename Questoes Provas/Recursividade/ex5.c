/*Calculo Mdc de maneira recursiva de 3 números inteiros*/

#include <stdio.h>
#include <stdlib.h>

// Função recursiva para calcular o MDC de dois números
int mdcDois(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdcDois(b, a % b);
}

// Função para calcular o MDC de três números
int mdcTres(int a, int b, int c) {
    return mdcDois(mdcDois(a, b), c);
}

int main() {
    system("chcp 65001");
    int num1, num2, num3;
    printf("Informe 3 números inteiros positivos: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("O MDC dos números %d, %d e %d é: %d\n",
           num1, num2, num3, mdcTres(num1, num2, num3));
    return 0;
}
