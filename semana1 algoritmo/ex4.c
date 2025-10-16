#include <stdio.h>
#include <conio.h>

void main () {
	int n1,n2,n3;
	printf("Digite os tres numeros:");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if (n1 == n2 || n1 == n3 || n2 == n3){
		printf("Informe numeros distintos!.\n");
	}
	     else {
    if (n1 >n2 && n1>n3) {
    printf("O maior numero eh : %d\n",&n1);	
	}
	else if (n2>n1 && n2>n3) {
		printf("O maior numero eh : %d\n",&n2);
	}
	else { printf("O maior numero eh: %d\n",n3);
	   }	
	}
	getch();
}
