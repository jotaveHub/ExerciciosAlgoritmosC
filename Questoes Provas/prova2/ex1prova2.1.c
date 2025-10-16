/*Escreva um programa em C que leia um vetor dez caracteres e verifique se o vetor é ou
não um palíndromo. A verificação deve ser feita por meio de um comando de
repetição.*/

#include <stdio.h>
const int tamanho = 10;

int main () {
    char vet[tamanho];
    int k;
    int ehPalindromo = 1;

    for(k=0; k<tamanho; k++) {
        printf("Informe um caractere:");
        scanf(" %c",&vet[k]);
    }
    for(int i = 0; i<tamanho / 2; i++) {
            if(vet[i] != vet[tamanho -1 -i]) {
                ehPalindromo = 0;
                break;
            }
        }       
        if(ehPalindromo) {
            printf("O vetor eh um palindromo.\n");
        }
        else {
        printf("O vetor nao eh um palindromo.\n");
        }
    return 0;
}