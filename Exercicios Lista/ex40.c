#include <stdio.h>
const float taxa_servico = 1.10;
const int couvert = 10.0;

int main () {
	float valor_consumo;
	printf("Informe o valor total consumido:");
	scanf("%f",&valor_consumo);
	
	float valor_final = (valor_consumo + couvert) *taxa_servico;
	printf("O valor final consumido no restaurante foi : %.2f\n",valor_final);
	return 0;
}
