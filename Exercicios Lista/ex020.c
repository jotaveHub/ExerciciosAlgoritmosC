/*Em  uma  determinada  cidade,  cada  m2  de  um  terreno  está  avaliado  em  R$  300,00. 
Escreva  um  programa  que  leia  o  comprimento  e  a  largura  de  um  terreno  localizado 
nesta cidade e calcule o seu valor de mercado. */

#include <stdio.h>
#include <stdlib.h>
const int Valor_m2 = 300.00;

int main() {
    system("chcp 65001");
    double comprimento,largura;   

    printf("Informe o comprimento do terreno em metros:");
    scanf("%lf",&comprimento);
    printf("Informe a largura do terreno em metros:");
    scanf("%lf",&largura);

    if (comprimento <= 0 || largura <= 0) {
        printf("\nErro: As medidas do terreno devem ser valores positivos.\n");
        return 1;
    }

    double MetrosQuadrados = comprimento * largura;
    double ValorDeMercado = MetrosQuadrados * Valor_m2;

    printf("O valor de mercado do terreno é: R$ %.2f\n",ValorDeMercado);
    return 0;
}
