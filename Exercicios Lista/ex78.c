/* Alfredo tem um carro flex e sempre fica na dúvida se é melhor abastecê-lo com álcool 
ou gasolina. Um dia um de seus amigos o ensinou a seguinte dica: “Pegue o valor do 
preço da gasolina e multiplique por 0,7. Se o valor for menor ou igual ao valor do preço 
do álcool, abasteça com gasolina. Caso contrário, abasteça com álcool.” Com base 
nestas  informações,  escreva  um  programa  que  leia  o  preço  do  litro  da  gasolina  e  do 
álcool e verifique se é melhor abastecer com álcool ou com gasolina. */

#include <stdio.h>

int main () {
    float valor_gasolina,valor_alcool;

    printf("Informe o valor da Gasolina:");
    scanf("%f",&valor_gasolina);
    printf("Informe  o valor do alcool:");
    scanf("%f",&valor_alcool);

    float melhor_combustivel = valor_gasolina * 0.70;

    if(melhor_combustivel <= valor_alcool) {
        printf("Abasteca com Gasolina.\n");
    }
    else {
        printf("Abasteca com Alcool.\n");
    }
    return 0;
}