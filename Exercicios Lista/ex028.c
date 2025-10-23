#include <stdio.h>
#include <conio.h>

void main () {
	float valor_venda;
	printf("Informe o valor da venda:");
	scanf("%f",&valor_venda);
	
	float valor_avista = valor_venda * 0.9;
	float valor_em_3x = valor_venda / 3.0;
	float valor_em_10x = ( valor_venda * 1.20) / 10.0;
    
    printf("\n Formas de pagamentos :\n");
	
    printf("O valor a vista eh : %.2f\n",valor_avista);
    printf("O valor parcelado em 3 vezes eh : %.2f\n",valor_em_3x);
    printf("O valor parcelado em 10 vezes eh : %.2f\n",valor_em_10x);
    getch ();
}
