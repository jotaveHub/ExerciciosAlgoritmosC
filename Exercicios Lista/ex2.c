/*Escreva  um  programa  que  leia  três  números  e  seus  respectivos  pesos  e  calcule  a  sua 
média ponderada.*/

#include <stdio.h>
#include <stdlib.h>

float media(int n1, int p1, int n2, int p2, int n3, int p3) {
    float mediaPonderada = (n1 * p1 + n2 * p2 + n3 * p3) / (float)(p1 + p2 + p3);
    return mediaPonderada;
}

int main() {
    system("chcp 65001");
    int n1, p1, n2, p2, n3, p3;
    printf("Digite o primeiro número e seu peso: ");
    scanf("%d %d", &n1, &p1);
    printf("Digite o segundo número e seu peso: ");
    scanf("%d %d", &n2, &p2);
    printf("Digite o terceiro número e seu peso: ");
    scanf("%d %d", &n3, &p3);

    printf("A média ponderada é: %.2f\n",media(n1, p1, n2, p2, n3, p3));
    system("pause");
    return 0;
}