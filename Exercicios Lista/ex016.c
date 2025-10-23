/*Escreva  um  programa  que  leia  uma  letra  minúscula  e  imprima  a  sua  letra  maiúscula 
correspondente. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main () {
    system("chcp 65001");
    char letraMinuscula;

    printf("Informe uma letra minúscula:");
    scanf("%c",&letraMinuscula);

    char letraMaiuscula;  
    letraMaiuscula = toupper(letraMinuscula);
    
    printf("A letra %c em maiuscúla é: %c.\n",letraMinuscula,letraMaiuscula);
    return 0;
    
}