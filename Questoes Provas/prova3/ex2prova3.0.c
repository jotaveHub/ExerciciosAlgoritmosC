/*Escreva um programa em C que leia um número inteiro N e um número inteiro positivo
k e identifique o k-ésimo algarismo do número N (da direita para a esquerda). A
verificação deve ser feita por meio de um subprograma recursivo, que deve receber
como parâmetros o número inteiro N e a posição K a ser verificada. Caso o valor de k
seja maior do que o número de algarismos do número N, a resposta deve ser 0.*/

#include <stdio.h>
#include <stdlib.h>

int KesimoAlg (int num,int k) {
    if (num == 0 && k > 0) {
        return 0; 
    }
    if (k == 1) {
        return num % 10; 
    }
    return KesimoAlg (num / 10, k - 1);
}

int main () {
    system("chcp 65001");
    int num,k;
    printf("Informe um número inteiro:");
    scanf("%d",&num);
    printf("Informe o k-ésimo termo desejado:");
    scanf("%d",&k);
    printf("O k-ésimo algarismo do número %d é:%d.",num,KesimoAlg(num,k));
return 0;
}