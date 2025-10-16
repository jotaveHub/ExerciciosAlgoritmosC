/*Escreva um programa que leia um texto e calcule a sua quantidade total de caracteres.
O programa deve ser resolvido sem a utilização da função strlen.*/


#include <stdio.h>
#include <string.h>

int main () {
    char texto[100];
    int contador = 0;

    printf("Informe uma string:");
    gets(texto);

    while(texto[contador] != '\0') {
        contador++;
    }

    printf("O lenght dessa string eh: %d",contador);
    return 0;
}