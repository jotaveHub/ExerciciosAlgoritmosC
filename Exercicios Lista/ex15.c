/*Escreva  um  programa  que  leia  uma  palavra  e  um  número  inteiro  k  e  identifique  a  k-
ésima letra da palavra informada pelo usuário.*/

//beijar
//k=3 -> i ;

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
const int tamanho = 100;
 
int main () {
    system("chcp 65001");
    char palavra[tamanho];
    int Kesimo;

    printf("Informe uma palavra:");
    scanf("%s",palavra);

    printf("Informe um número inteiro(K-ésimo):");
    scanf("%d",&Kesimo);
    
    char Kesimaletra = palavra[Kesimo-1];

    printf("A %d° letra da palavra %s é %c:",Kesimo,palavra,Kesimaletra);
    return 0;

    
}