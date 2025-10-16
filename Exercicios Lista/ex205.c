/*Escreva um programa que leia o valor de uma distância percorrida em km e o tempo 
gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada 
através de um subprograma.*/

#include <stdio.h>
#include <stdlib.h>

int VelocidadeMedia (int km,int horas) {
    int Vm = km / horas;
    return Vm;
}

int main() {
    system("chcp 65001");
    int km,horas;
    printf("Informe a distância percorrida em KM:");
    scanf("%d",&km);
    printf("Informe o tempo gasto em Horas:");
    scanf("%d",&horas);

    printf("A velocidade média obtida foi:%dm/s.",VelocidadeMedia(km,horas));
    
    return 0;
}