/*Escreva um subprograma recursivo que receba como entrada um número inteiro n e 
um  número  inteiro  positivo  k  e  identifique  o  k-ésimo  alagrismo  do  número  n  (da 
direita  para  a  esquerda).  Por  exemplo,  se  n  for  1957  e  k  for  igual  a  3,  o  resultado do subprograma deve ser o número 9.*/

#include <stdio.h>
#include <stdlib.h>

int KesimoAlg (int num,int k) {
    if (k == 1) {
        return num % 10; 
    }
    return KesimoAlg (num/10,k-1);
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