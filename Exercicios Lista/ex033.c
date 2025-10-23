
#include <stdio.h>
#include <string.h>

int main () {
	int votos1,votos2,votos3;
	char candidato1[50],candidato2 [50],candidato3[50];
	
	printf("Informe o nome do primeiro canditado e a quantidade de votos obtida:");
	scanf("%49s %d",&candidato1,&votos1);
	
	printf("Informe o nome do segundo candidato e a quantidade de votos obtida:");
	scanf("%49s %d",&candidato2,&votos2);
	
	printf("Informe o nome do terceiro candidato e a quantidade de votos obtida:");
	scanf("%49s %d",&candidato3,&votos3);
	
	int total_votos = votos1 + votos2 + votos3;
	if(total_votos == 0) {
		printf("Nenhum voto foi computado.\n");
	}
	float perc_c1 = ((float)votos1 / total_votos) * 100;
    float perc_c2 = ((float)votos2 / total_votos) * 100;
    float perc_c3 = ((float)votos3 / total_votos) * 100;

	
	printf("Resultado da eleicao.\n");
	printf("%s : %.2f%% dos votos\n",candidato1,perc_c1);
	printf("%s : %.2f%% dos votos\n",candidato2,perc_c2);
	printf("%s : %.2f%% dos votos\n",candidato3,perc_c3);
	
	return 0;
}
