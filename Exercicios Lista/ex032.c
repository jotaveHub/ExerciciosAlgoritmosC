#include <stdio.h>
#include <conio.h>

void main () {
	float distancia,combustivel;
	printf("informe a distancia que sera percorrida (em KM):");
	scanf("%f",&distancia);
	printf("informe o valor do combustivel (em REAIS):");
	scanf("%f",&combustivel);
	
	// 14 = KM que se faz com 1 litro de combustivel
	float litros_necessarios = distancia / 14.0;
	float gasto_combustivel = litros_necessarios * combustivel;
	
	printf("O valor gasto com combustivel sera : %.2f $\n",gasto_combustivel);
	getch ();
}
