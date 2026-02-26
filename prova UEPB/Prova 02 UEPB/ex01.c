/*Leia dois inteiros A e B (podendo A > B). O programa deve percorrer todos os inteiros
no intervalo entre eles (inclusive) e calcular a soma dos valores que:
•sao multiplos de 3 ou m ́ultiplos de 5;
•mas nao sao multiplos de ambos ao mesmo tempo (ex.: 15, 30, 45... devem ser ignorados).
Entrada: dois inteiros A e B.
Sa ́ıda: imprima apenas a soma.
Exemplo
Entrada
1 20
Saída
83
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("chcp 65001");
    int A = 15;
    int B = 10;
    int soma = 0;

    if (A > B) {
        for(int k = A; k >=B; k--) {
            if( k % 3 == 0 && k % 5 == 0) {
                continue;;
            }
            else if (k % 3 == 0|| k % 5 == 0) {
                soma = soma + k;
            }
        }
    }
    else {
        for(int k = A; k<=B; k++) {
         if( k % 3 == 0 && k % 5 == 0) {
            continue;;
        }
         else if (k % 3 == 0|| k % 5 == 0) {
            soma = soma + k;
        }
    }
}

    printf("%d\n",soma);

    system("pause");
    return 0;
}