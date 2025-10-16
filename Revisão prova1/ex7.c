/*Escreva um programa que simule um jogo de adivinhacao:
- O computador escolhe um numero aleatorio entre 1 e 50.
- O usuario deve tentar adivinhar ate acertar.
- A cada tentativa, o programa diz se o palpite foi 'maior' ou 'menor' que o numero correto*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int resposta = (rand() % 50) + 1;
    int palpite;
    int tentativas = 0;

    printf("Voce esta no jogo da adivinhacao, informe um numero de 1 a 50.\n");
    do {
        if (tentativas >= 10) {
            printf("Voce chegou ao limite ao numero maximo de tentativas. O numero correto era %d.\n", resposta);
            return 0;
        }
        printf("Informe um numero de 1 a 50:");
        scanf("%d", &palpite);
        tentativas++;
        if (palpite > resposta) {
            printf("%d eh maior que a resposta.\n", palpite);
        } else if (palpite < resposta) {
            printf("%d eh menor que a resposta.\n", palpite);
        }
    } 
    while(palpite != resposta);
    printf("%d, Voce acertou o numero secreto! Parabens!!!!!\n", palpite);
    return 0;
}