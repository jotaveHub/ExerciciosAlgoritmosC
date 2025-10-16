#include <stdio.h>
#include <conio.h>

void main () {
    float area,valor_metro;
    printf("informe a area da casa :");
    scanf("%f",&area);
    printf("Informe o valor cobrado pelo metro quadrado :");
    scanf("%f",&valor_metro);

    float custo_final = area * valor_metro;
    printf("O valor final do projeto foi de :%f $\n",custo_final);
    getch ();
}
