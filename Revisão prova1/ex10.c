/*Escreva  um  programa  que  leia  uma  sequencia  de  numeros  inteiros  positivos.  O  programa
termina  quando  o  usuario  digitar  dois  numeros  consecutivos  iguais.  No  final,  o  programa  deve
imprimir quantos numeros foram lidos no total (sem contar os dois repetidos).*/


#include <stdio.h>

int main(){
    int num, num_anterior = 0;
    int contador = -1;

    while(1){
        printf("Digite o valor: ");
        scanf("%d", &num);

        if(num <= 0){
            printf("Apenas numeros positivos.\n");
            continue;
        }

        if(num == num_anterior){
            break;
        }

        contador++;
        num_anterior = num;
    }

    printf("Quantidade de numeros lidos: %d.\n\n", contador);

    return 0;
}

