/*Escreva  um  programa  que  leia  um  número  inteiro  N  e  imprima  o  enésimo  termo  da 
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).*/

#include <stdio.h>

int main() {
    int num,i;
    int termo_anterior = 1;
    int termo_atual = 1;    
    int proximo_termo;      

    printf("Informe um numero inteiro positivo para N: ");
    scanf("%d",&num);
    if (num <= 0) {
        printf("Entrada invalida, digite um numero inteiro positivo.\n");
        return 1; 
    }
    if (num == 1 || num == 2) {
        printf("O %d termo da serie de Fibonacci eh: 1\n", num);
        return 0; 
    }
      
    for (i = 3; i <= num; i++) {
        proximo_termo = termo_anterior + termo_atual; 
        termo_anterior = termo_atual;                 
        termo_atual = proximo_termo;                  
    }
    printf("O %d termo da serie de Fibonacci eh: %d\n", num, termo_atual);

    return 0;
}
    
