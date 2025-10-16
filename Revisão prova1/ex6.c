/*Escreva um programa que leia um numero inteiro positivo N e imprima a soma dos digitos pares
desse numero.
Exemplo: se N = 4827 -> digitos pares: 4, 8, 2 -> soma: 14*/

// 345 = 5
// 345 / 10 = 34
// 34 = 4 -> entrou na condição de par.
// par = soma_pares = 0 + 4;
// 34 / 10 = 3
// 3


#include <stdio.h>

int main() {
    int numero, digito;
    int soma_pares = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {
        digito = numero % 10; // Obtém o último dígito
        if (digito % 2 == 0) { // Verifica se o dígito é par
            soma_pares += digito; // Soma o dígito par
        }
        numero /= 10; // Remove o último dígito
    }

    printf("A soma dos digitos pares eh: %d\n", soma_pares);

    return 0;
}