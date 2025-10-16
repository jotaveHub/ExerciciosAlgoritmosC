#include <stdio.h>
#include <conio.h>

void main() {
	int n1,n2;
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	
	if (n2%n1 == 0){
		printf("%d eh muliplo de %d\n",n2,n1);
	}
	else { printf ("%d nao eh multiplo de %d\n",n2,n1);
	}
	getch ();
}
