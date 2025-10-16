/*Escreva um programa em C que leia um valor do tipo string e dois caracteres c1
e c2. Depois disso, o programa deve modificar a string informada pelo usuário,
substituindo todas as ocorrências do caractere c1 pelo caractere c2. A
modificação da string deve ser feita por meio de um subprograma e a
impressão da string modificada deve ocorrer fora do subprograma
responsável por fazer a modificação. O programa deve imprimir o valor da
string antes e após a modificação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Subprograma que substitui c1 por c2 na string
void substituirChar(char texto[], char c1, char c2) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == c1) {
            texto[i] = c2;
        }
    }
}

int main() {
    system("chcp 65001");
    char texto[100], c1, c2;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // remove o \n do final, se existir
    str[strcspn(str, "\n")] = '\0';

    printf("Digite o caractere a ser substituido (c1): ");
    scanf(" %c", &c1);

    printf("Digite o caractere substituto (c2): ");
    scanf(" %c", &c2);

    printf("\nString antes da substituicao: %s\n", str);

    substituirChar(str, c1, c2);

    printf("String apos a substituicao: %s\n", str);

    return 0;
}