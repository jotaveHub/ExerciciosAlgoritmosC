/*Escreva um programa que leia o número de gols marcados pelo time da casa e o número de gols marcado pelo time visitante e 
verifique se o jogo foi vencido pelo time da casa, pelo time visitante ou se terminou empatado.*/

#include <stdio.h>


int main () {
    int casa_gols,fora_gols;

    printf("Informe o numero de gols do time da casa:");
    scanf("%d",&casa_gols);
    printf("Informe o numero de gols da equipe visitante:");
    scanf("%d",&fora_gols);

    if(casa_gols > fora_gols) {
        printf("Time da casa venceu.\n");
    }
    else if(fora_gols < casa_gols) {
        printf("Time visitante venceu.\n");
    }
    else {
        printf("O jogo terminou empatado.\n");
        }
return 0;
}
