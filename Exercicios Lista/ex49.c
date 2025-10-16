/*
Questão 49:

Uma revendedora de veículos resolveu fazer uma promoção em seus veículos. Nesta
revendedora, o preço de um veículo é calculado através do seu preço de compra, mais
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta
promoção, a revendedora resolveu tirar o valor do IPI. Com base nestas informações,
escreva um programa que leia o preço atual de um veículo e calcule qual deve ser o
seu preço na promoção.

valor original do veículo = x
valor atual do veículo = x + x*0.2 + x*0.17 + x*0.2
x * (1 + 0.2 + 0.17 + 0.2) = valor atual do veículo
x = valor_atual / 1.57

valor na promoção = valor atual sem a taxa de IPI
valor atual sem a taxa de IPI = valor_atual - x*0.2
*/

#include <stdio.h>
#include <conio.h>

void main () {
	float preco_compra,preco_atual,preco_promocional;
	printf("Informe o valor atual do veiculo:");
	scanf("%f",&preco_atual);
	
	preco_compra = preco_atual / 1.57;
	preco_promocional = preco_compra * 1.20;
	
	printf("O valor do veiculo na promocao deve ser : R$ %.2f\n",preco_promocional);
	getch();
}
