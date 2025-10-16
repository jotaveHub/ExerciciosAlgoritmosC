//João resolveu poupar dinheiro para comprar um carro. Para isso, ele decidiu que todo mês irá poupar 25% do seu salário, até conseguir juntar um bom valor para ser dado como entrada. Com base nestas informações, escreva um programa que receba como entrada o valor do salário atual de João e o valor que ele deseja juntar como entrada e calcule quanto tempo ele terá que trabalhar para conseguir juntar o valor desejado. A resposta deve ser dada na forma x anos e y meses.

#include <stdio.h>

int main () {
    float salario, valor_entrada;

    printf("Informe o seu salario: ");
    scanf("%f", &salario); 
    printf("Informe o valor desejado para dar de entrada: ");
    scanf("%f", &valor_entrada); 

    float poupanca_mes = salario * 0.25;

    int meses = valor_entrada / poupanca_mes;
    int anos = meses / 12;
    meses = meses % 12;

    printf("Tempo necessario: %d anos e %d meses\n", anos, meses);
    return 0;
}
