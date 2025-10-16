/*Escreva  um  programa  que  leia  um  vetor  de  dez  números  inteiros  e  ordene  o  vetor 
lido em ordem crescente*/

#include <stdio.h>
const int tamanho = 10;

int main () {
    int vet[tamanho];
    int aux,k,flag=1;

    for(k = 0; k<tamanho; k++) {
        printf("Indice %d:",k);
        scanf("%d",&vet[k]);
    }
    while(flag) {
    flag = 0;
    for(k=0; k<tamanho-1; k++) {
        if(vet[k] > vet[k+1]) {
            aux = vet[k];
            vet[k] = vet[k+1];
            vet[k+1] = aux;
            flag = 1;
        }
    }
}
    for(k=0; k<tamanho; k++) {
    printf("\nindice %d:%d",k,vet[k]);
    }
    return 0;
}