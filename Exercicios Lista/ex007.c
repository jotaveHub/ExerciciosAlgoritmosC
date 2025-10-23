#include <stdio.h>

    int main () { ;
    float base,altura;

    printf("Digite o valor da base :");
    scanf("%f", &base);
    printf("Digite o valor da altura :");
    scanf("%f", &altura);

    float area = (base * altura) / 2 ;
    printf("O resultado da area do triangulo eh: %.2f\n", area);
    return 0; }
    
