/*Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu
valor correspondente em Fahrenheit e em Kelvin*/

#include <stdio.h>
#include <stdlib.h>

int Fahrenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}

int Kelvin(int celsius) {
    return celsius + 273;
}

int main() {
    system("chcp 65001");

    int celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &celsius);

    printf("Temperatura em Fahrenheit: %d\n",Fahrenheit(celsius));
    printf("Temperatura em Kelvin: %d\n",Kelvin(celsius));

    system("pause");
    return 0;
}