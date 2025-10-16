#include <stdio.h>

int main () {
	int horas,minutos,fuso;
	printf("Informe as horas:");
    scanf("%d",&horas);
    printf("Informe os minutos:");
    scanf("%d",&minutos);
    printf("Informe o fuso:");
    scanf("%d",&fuso);
    
	int nova_hora = ( ((horas + fuso) % 24 ) + 24 ) % 24;
// 00h -3
  // -3 % 24 = -3
  // -3 + 24 = 21
  // 21 % 24 = 21

  // 23h +3
  // 26 % 24 = 2
  // 2 + 24 = 26
  // 26 % 24 = 2
    printf("O horario %dh%d com fuso %d eh %dh%d.\n", horas, minutos, fuso, nova_hora, minutos);
  
 return 0;
}
