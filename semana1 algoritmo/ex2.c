#include <stdio.h>
#include <conio.h>

void main () {
	int idade;
	printf("Informe sua idade:");
	scanf("%d",&idade);
	
	if (idade >=0 && idade <=12) {
		printf("eh crianca.\n");
	}
	else if ( idade <= 17) {
		printf(" eh adolescente.\n");
	}
	else if ( idade <= 59) {
		printf("eh adulta.\n");
	}
	else { printf("eh idoso.\n");
	}
	getch ();
}
