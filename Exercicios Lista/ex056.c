/*A Cifra de César é um método de criptografia em que cada letra da mensagem original
é substituída por outra e a distância entre cada letra original e a sua substituta na
mensagem enviada é sempre a mesma. Por exemplo, se a letra a da mensagem é
substituída pela letra f na mensagem enviada, então a letra b será substituída pelo g, o
c pelo h, o d pelo i e assim sucessivamente, até que a letra y será substituída pelo d e o
z pela letra e. Com base nestas informações, escreva um programa que leia um
caractere representando uma das letras da mensagem original, outro caractere
representando a letra que vai substituí-lo na nova mensagem, e um terceiro caractere
representando outra letra da mensagem original e determine a letra que vai substituíla na nova mensagem*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
        system("chcp 65001");
        char original1, cifrada1, original2, resultado;
        char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
        int i, j, deslocamento;
    
        printf("Digite a primeira letra da mensagem original: ");
        scanf(" %c", &original1);
    
        printf("Digite a letra correspondente na mensagem criptografada: ");
        scanf(" %c", &cifrada1);
    
        printf("Digite outra letra da mensagem original: ");
        scanf(" %c", &original2);
    
        for (i = 0; i < 26; i++) {
            if (alfabeto[i] == original1)
            break;
        }
        for (j = 0; j < 26; j++) {
            if (alfabeto[j] == cifrada1) 
            break;
        }
    
        deslocamento = j - i;

        if (deslocamento < 0) {
         deslocamento += 26;
        }
        for (i = 0; i < 26; i++) {
            if (alfabeto[i] == original2)
             break;
        }
        resultado = alfabeto[(i + deslocamento) % 26];
    
        printf("A letra '%c' sera substituida por '%c' na mensagem criptografada.\n", original2, resultado);
    
        return 0;
    }
    