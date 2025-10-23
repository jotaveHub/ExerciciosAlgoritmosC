
#include <stdio.h>

int main () {
	float val_atual,val_anterior;
	printf(" Informe o valor atual e anterior da acao:");
	scanf("%f %f",&val_atual,&val_anterior);
	
	float variacao = (val_atual - val_anterior) / val_anterior;
	int percentual_variacao = variacao * 100;
	
	printf("A variacao em termos percentuais entre a acao foi de :%.d %%\n",percentual_variacao);
	return 0;
}
