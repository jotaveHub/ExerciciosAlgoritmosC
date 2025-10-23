/*Escreva um programa que  leia o valor do seno de  um ângulo e  calcule o valor do seu 
cosseno.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    double seno,cosseno;

    printf("Digite o valor do seno do angulo: ");
    scanf("%lf", &seno);

    // verifica se o seno está no intervalo válido
    if (seno < -1 || seno > 1) {
        printf("Valor invalido! O seno deve estar entre -1 e 1.\n");
        return 1;
    }

    // identidade trigonométrica
    cosseno = sqrt(1 - seno * seno);

    printf("O valor do cosseno (positivo) eh: %.4f\n", cosseno);

    return 0;
}
