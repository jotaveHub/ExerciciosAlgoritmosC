/*
Escreva um programa que leia varios nomes ate que seja digitado 'fim'. O programa deve contar
quantos nomes com mais de 5 letras foram digitados.*/

#include <stdio.h>
#include <string.h>

int main () {
    char nome[100];
    int cont=0;

    do{
        printf("Informe um nome:");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        if(strcmp(nome, "fim") == 0 || strcmp(nome, "Fim") == 0) {
            break;
        }
        if(strlen(nome) > 5) {
            cont++;
        }
    }
    while(strcmp(nome, "fim") != 0 && strcmp(nome, "Fim") != 0);
    printf("Foram digitados %d nomes com mais de 5 letras.",cont);
    return 0;
}