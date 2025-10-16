/*Escreva um programa que leia um caractere e verifique se o mesmo é uma letra
maiúscula, uma letra minúscula, um numeral ou nenhum dos tipos anteriores.*/

#include <stdio.h>
#include <ctype.h>

int main () {
    char caractere;
    printf("Informe um caractere:");
    scanf(" %c", &caractere);

if (isupper(caractere)) {
    printf("O caractere eh uma letra maiuscula.\n");
}
else if (islower(caractere)) {
    printf("O caractere eh uma letra minuscula.\n");
}
else {
 printf("O caractere eh um numeral.\n"); 
}
return 0;

}
