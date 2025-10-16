/*Escreva um programa C que leia três números inteiros positivos e calcule o Mínimo
Múltiplo Comum desses três números. O cálculo do MMC deve ser feito por meio de
um subprograma recursivo. Como dica, crie primeiro um subprograma que receba
como parâmetros três números inteiros positivos e encontre o menor número maior
ou igual a 2 que seja um divisor exato de pelo menos um desses três números.*/

#include <stdio.h>
#include <stdlib.h>

int MenorDivisor(int n1, int n2, int n3) {
    int fator = 2;
    // enquanto um dos numeros for divisivel por 2 ele mantém o divisor como 2; quando nenhum número é mais divisivel por 2 ele itera fator + 1 , que no caso seria 2 + 1 = 3 , entao agora o divisor deixa de ser 2 e passa a ser 3. assim em diante utilizando essa lógica de iterar para o próximo primo divisor.
    while (n1 % fator != 0 && n2 % fator != 0 && n3 % fator != 0) {
        fator = fator + 1;
    }
    return fator; // sai do while após encontrar o menor número >=2 que divide pelo menos 1 dos números.
}

// caso base.
int mmc(int n1, int n2, int n3) {
    if (n1 == 1 && n1 == n2 && n2 == n3) {
        return 1;
    }
    int fator = MenorDivisor(n1, n2, n3); 
    if (n1 % fator == 0) {
        n1 = n1 / fator;
    }
    if (n2 % fator == 0) {
        n2 = n2 / fator;
    }
    if (n3 % fator == 0) {
        n3 = n3 / fator;
    } 
    return fator * mmc(n1, n2, n3);
}

int main () {
    system ("chcp 65001");
    int num1,num2,num3;
    printf("Informe os 3 números inteiros positivos:");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("O MMC dos números %d,%d,%d é: %d.",num1,num2,num3,mmc(num1,num2,num3));
    return 0;
}
