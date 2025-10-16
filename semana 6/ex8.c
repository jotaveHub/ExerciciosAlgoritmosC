/*Escreva  um  programa  que  leia  um  vetor  de  10  números  inteiros  e identifique a 
distância entre o menor e o maior número do vetor. Você pode supor que o vetor 
não tem  nenhum número repetido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int tamanho = 10;

int main() {
    system("chcp 65001");
    int vet[tamanho];
    int i;
    int maior,menor;
    
    for(i=0; i<tamanho; i++) {
        printf("Informe o %d° número inteiro:",i + 1);
        scanf("%d", &vet[i]);

        if(i == 0) {
            menor = vet[i];
            maior = vet[i];
        }
        else {
            if(vet[i] < menor) {
                menor = vet[i];   
            }
            if(vet[i] > maior) {
               maior = vet[i];
            }
        }
    }
    int distancia = maior - menor;

    printf("A distância entre o maior e o menor número é:%d\n",distancia);
    system("pause");
    return 0;
}