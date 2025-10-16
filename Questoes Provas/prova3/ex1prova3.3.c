/*Escreva um programa em C que leia o gabarito de uma prova objetiva de dez questões e, em seguida, leia o cartão de respostas de dez candidatos. Para cada candidato o programa deve informar a quantidade de acertos.
O programa deve ter um subprograma que receba como parâmetro um vetor de dez caracteres e faça a leitura e preenchimento desse vetor. Esse subprograma deve ser usado tanto para a leitura do gabarito quanto do cartão de resposta de cada candidato.O programa também deve ter um subprograma que receba como parâmetros dois vetores de dez caracteres e verifique quantas posições eles têm em comum. Esse subprograma deve ser usado para computar a quantidade de acertos de cada um dos candidatos.*/

#include <stdio.h>
#include <stdlib.h>

const int QTD_QUESTOES = 10;
const int QTD_CANDIDATOS = 10;

void lerVetor(char gabarito[QTD_QUESTOES]) {
    for (int i = 0; i < QTD_QUESTOES; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]); 
    }
}

int compararVetores(char gabarito[QTD_QUESTOES], char respostas[QTD_QUESTOES]) {
    int acertos = 0;
    for (int i = 0; i < QTD_QUESTOES; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }
    return acertos;
}

int main() {
    char gabarito[QTD_QUESTOES];
    char respostas[QTD_CANDIDATOS][QTD_QUESTOES];

    printf("Digite o gabarito da prova ex:(ABCDEABCDE):\n");
    lerVetor(gabarito);

    for (int i = 0; i < QTD_CANDIDATOS; i++) {
        printf("\nDigite o cartão resposta do candidato %d:\n", i + 1);
        lerVetor(respostas[i]);
    }

    printf("\nResultados:\n");
    for (int i = 0; i < QTD_CANDIDATOS; i++) {
        printf("Candidato %d: %d acertos\n", i + 1, compararVetores(gabarito, respostas[i]));
    }
    return 0;
}

