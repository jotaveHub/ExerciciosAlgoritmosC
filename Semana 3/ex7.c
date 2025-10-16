/*Escreva um programa que leia um texto e, em seguida, dois caracteres x e y, e, no texto
informado, substitua todas as ocorrências do caractere x pelo caractere y. Por
exemplo, se o texto informado foi banana, o caractere x for ‘a’ e o caractere y for ‘e’, o
texto deverá ser alterado para benene.*/

#include <stdio.h>
#include <string.h>

int main() {
    char texto[200];
    char x, y;

      printf("Informe o texto: ");
      gets(texto);
 
      printf("Informe o caractere a ser substituido (x): ");
      scanf(" %c", &x);

      printf("Informe o caractere substituto (y): ");
      scanf(" %c", &y);

    int k;

    for (k = 0; texto[k] != '\0'; k++) {
        if (texto[k] == x) {
            texto[k] = y;
        }
    }

    printf("Texto alterado: %s.\n", texto);
return 0;
}
