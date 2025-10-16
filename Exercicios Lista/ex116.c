/*Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e calcule o percentual de mulheres que tem entre 18 e 21 anos.*/

#include <stdio.h>
const int total_pessoas = 20;

int main () {
    char sexo;
    int idade;

    int mulheres = 0;
    for(int k = 1 ; k <= total_pessoas ; k++) {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);   
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade >= 18 && idade <= 21 && (sexo == 'F' || sexo == 'f')) {
            mulheres++;
        }
    }
    float perc_mulheres = ((float)mulheres * 100) / total_pessoas; 
    printf("O percentual de mulheres entre 18 e 21 anos foi: %.2f%%\n", perc_mulheres);
    return 0;
}