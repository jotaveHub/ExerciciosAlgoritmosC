/*Escreva um programa que leia o valor de um mês e de um ano e verifique a 
quantidade de dias do mês informado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int mes, ano;
    int dias;

    printf("Informe um mês do ano (1-12):");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    switch (mes) {
    case 1: dias = 31; break;
    case 2:
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
            dias = 29;
        else
            dias = 28;
        break;
    case 3: dias = 31; break;
    case 4: dias = 30; break;
    case 5: dias = 31; break;
    case 6: dias = 30; break;
    case 7: dias = 31; break;
    case 8: dias = 31; break;
    case 9: dias = 30; break;
    case 10: dias = 31; break;
    case 11: dias = 30; break;
    case 12: dias = 31; break;
    default: dias = 0; break;
    }

    printf("O mês %d do ano %d tem %d dias.\n", mes, ano, dias);

    system("pause");
    return 0;
}