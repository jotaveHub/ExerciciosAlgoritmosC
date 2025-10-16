#include <stdio.h>

int main () {
	int numero;
	printf("Informe um numero inteiro entre [0,999]:");
	scanf("%d",&numero);
	
	int centena = numero /100;
	int dezena = (numero % 100) / 10; 
	int unidade = numero % 10;
	
	int reverso_centena = unidade;
	int reverso_dezena = dezena;
	int reverso_unidade = centena;
	
	printf(" O numero escrito em reverso eh : %d%d%d\n",reverso_centena,reverso_dezena,reverso_unidade);
	return 0;

}
