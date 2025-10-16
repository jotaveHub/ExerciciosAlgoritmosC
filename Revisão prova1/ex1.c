/*Escreva  um  programa  que  leia  o  nome  de  uma  pessoa  e  sua  idade.  Se  a  idade  for  menor  que
18, imprima 'Entrada proibida'. Se for entre 18 e 59 anos, imprima 'Entrada liberada'. Se for 60 anos
ou mais, imprima 'Entrada com prioridade'.*/

#include <stdio.h>

int main () {
    char nome[20];
    int idade;

    printf("Informe o seu nome:");
    fgets(nome, sizeof(nome), stdin);
    printf("Informe a sua idade:");
    scanf("%d",&idade);

    if(idade < 18) {
        printf("Entrada Proibida.");
    }
    else if(idade < 59) {
        printf("Entrada Liberada.");
    }
    else {
        printf("Entrada com prioridade.");
    }
    return 0;
}

