 #include <stdio.h>
 #include <conio.h>
 
 void main (){
 	int num_questoes,acertos;
 	printf("Informe a quantidade de questoes da prova:");
 	scanf("%d",&num_questoes);
 	printf("Informe a quantidade de acertos :");
 	scanf("%d",&acertos);
 	
 	float percentual_acertos = ((float)acertos / num_questoes) * 100;
 	float percentual_erros = 100 - percentual_acertos;
 	
 	printf("O percentual de acertos foi : %.f%%\n",percentual_acertos);
 	printf("O percentual de erros foi : %.f%%\n",percentual_erros);
 	getch();
 }
