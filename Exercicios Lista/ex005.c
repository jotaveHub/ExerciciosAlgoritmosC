/*Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float AreaCircunferencia (float raio) {
    float area = M_PI * pow(raio,2);
    return area;
}

float Comprimento (float raio) {
    float comprimento = 2 * M_PI *raio;
    return comprimento;
}

int main() {
    system("chcp 65001");
    float raio;

    printf("Informe o valor do raio da circunferência:");
    scanf("%f",&raio);

    printf("A área da circunferência é:%.2f\n",AreaCircunferencia(raio));
    printf("O comprimento da circunferência é:%.2f\n",Comprimento(raio));

    system("pause");
    return 0;
}