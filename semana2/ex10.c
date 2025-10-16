#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char texto[100];
    printf("Informe o texto:");
    gets(texto);

    int minusculas=0,maiusculas=0,numerais=0,outros=0;
    int tamanho = strlen(texto);
    int k;

    for(k=0; k<tamanho; k++){
    //islower verifica se um caractere é uma letra minúscula.
        if(islower(texto[k])) {
            minusculas++;
        }
    //isupper verifica se um caractere é uma letra maiuscula.
        else if(isupper(texto[k])) {
            maiusculas++;
        }
    //isdigit verifica se um caractere é um número.
        else if(isdigit(texto[k])) {
            numerais++;
        }
        else {
            outros++;
        }
    }

    printf("%d letras minusculas.\n",minusculas);
    printf("%d letras maiusculas.\n",maiusculas);
    printf("%d numerais.\n",numerais);
    printf("%d outras.\n",outros);

    return 0;
}
