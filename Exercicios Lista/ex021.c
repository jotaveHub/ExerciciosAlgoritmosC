#include <stdio.h>
#include <conio.h>

void main () {
	float preco_producao,margem_lucro;
	printf("Informe o valor gasto na producao:");
	scanf("%f",&preco_producao);
	printf("Informe em porcentagem a margem de lucro desejada:");
	scanf("%f",&margem_lucro);
	
	float lucro = (100 + margem_lucro) / 100;
	float valor_venda = preco_producao * lucro ;
	printf("O preco da venda sera :%.2f\n",valor_venda);
	getch;
}
