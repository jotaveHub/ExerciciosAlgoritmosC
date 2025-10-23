#include <stdio.h>
#include <string.h>

int main () {
    char palavra[11];
    printf("Informe a palavra :");
    scanf("%s",palavra);
    int tamanho = strlen(palavra);
    printf("A palavra %s tem : %d letras\n",palavra,tamanho);
    return 0;

}