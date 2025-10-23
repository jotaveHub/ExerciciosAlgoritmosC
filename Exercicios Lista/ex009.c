/*Escreva  um  programa  que leia o valor  de  uma  distância  percorrida em  km  e  o  tempo 
gasto em horas e calcule a velocidade média em m/s.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int VelocidadeMedia (int km, int tempo) {
    int vm = km / tempo;
    return vm;
}

int main() {
    system("chcp 65001 > NUL");
    int km,tempo;
    printf("Informe a distância percorrida em KM:");
    scanf("%d",&km);
    printf("Informe o tempo gasto em horas:");
    scanf("%d",&tempo);

    printf("A velocidade média obtida foi: %dm/s.\n",VelocidadeMedia(km,tempo));
    system("pause");
    return 0;
}