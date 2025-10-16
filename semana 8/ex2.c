/*Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o seu
perímetro. O programa deve ter um subprograma para calcular a área e outro para calcular o
perímetro.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int area (int lado) {
    int AreaQuadrado = pow(lado,2);
    return AreaQuadrado;
}

int perimetro (int lado) {
    int ResultPerimetro = lado * 4;
    return ResultPerimetro;
}

int main () {
    system("chcp 65001");
    int lado;
    printf("Informe o valor do lado:");
    scanf("%d",&lado);
    printf("A área do quadrado é: %dcm.\n",area(lado));
    printf("O perímetro do quadrado é: %dcm.\n",perimetro(lado));
    return 0;
}

