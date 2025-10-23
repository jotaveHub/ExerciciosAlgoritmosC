#include <stdio.h>
#include <conio.h>

void main () {
	int termo_inicial,razao;
	printf("Informe o termo inicial da PA:");
	scanf("%d",&termo_inicial);
	printf("Informe a razao da PA:");
	scanf("%d",&razao);
	
	int termo1 = termo_inicial;
	int termo2 = termo1 + razao;
	int termo3 = termo2 + razao;
	int termo4 = termo3 + razao;
	int termo5 = termo4 + razao;
	
	printf("Os 5 primeiros termos da PA sao : %d, %d, %d, %d, %d.\n",termo1,termo2,termo3,termo4,termo5);
	getch();
}
