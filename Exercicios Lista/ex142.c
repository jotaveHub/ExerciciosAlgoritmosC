/*Um banco está realizando uma grande promoção em seus financiamentos. Ele financia 
qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do 
valor  do  empréstimo.  Os  valores  das  demais  prestações  correspondem  ao  valor  da 
parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informações, 
escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor 
de  cada  prestação, o  valor  total  que  o  cliente  vai  pagar  pelo empréstimo e  o  total  de 
juros que o cliente vai pagar pelo empréstimo. */

#include <stdio.h>
#include <stdlib.h>
const float juros = 1.07;

int main() {
    system("chcp 65001");
    float ValorDoEmprestimo;
    printf("Informe o valor do empréstimo:");
    scanf("%f",&ValorDoEmprestimo);
    
    float parcela1 =  ValorDoEmprestimo * 0.20; 
    float parcela2 =  parcela1 * juros;
    float parcela3 =  parcela2 * juros;
    float parcela4 =  parcela3 * juros;
    float parcela5 =  parcela4 * juros;

    float ValorTotal = parcela1 + parcela2 + parcela3 + parcela4 + parcela5;
    float TotalJuros = ValorTotal - ValorDoEmprestimo;

    printf("Parcela 1 = R$ %.2f\n",parcela1);
    printf("Parcela 2 = R$ %.2f\n",parcela2);
    printf("Parcela 3 = R$ %.2f\n",parcela3);
    printf("Parcela 4 = R$ %.2f\n",parcela4);
    printf("Parcela 5 = R$ %.2f\n",parcela5);
    
    printf("O valor total do financiamento é: R$ %.2f\n",ValorTotal);
    printf("O valor total gasto com juros é: R$ %.2f\n",TotalJuros);
    return 0;
}