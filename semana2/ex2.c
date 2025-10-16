#include <stdio.h>

int main () {
    float x,y;
    printf("Informe o valor de x e de y do ponto :");
    scanf("%f %f",&x,&y);

    float formula = 2*x + 1;
    if(formula == y) {
    	printf("Pertence a reta y.\n");
    }
    	else if(formula != y){
    		printf("Nao pertence a reta y.\n");
		}		
    return 0;
}
