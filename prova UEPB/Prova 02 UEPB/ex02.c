/*Leia uma sequencia indeterminada de numeros inteiros. A leitura termina quando o
usuario digitar −1 (sentinela), que nao deve ser contabilizado.
Calcule:
•total de valores lidos (exceto −1);
•quantidade de positivos, negativos e zeros;
•media somente dos valores positivos (se nao houver positivos, a media deve ser 0.00).
Entrada: uma sequencia de inteiros, um por linha, terminada por -1.
Saıda: imprima em uma linha, separados por espaco:
total positivos negativos zeros media positivos
A media deve ser impressa com duas casas decimais.
Exemplo
Entrada
5
-2
0
10
3
-1
Saıda
5 3 1 1 6.00
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    system("chcp 65001");

    int num = 0;
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;
    int SomaPositivos = 0;
    float media;
    int total = 0;


    while(1) {
        printf("informe um número inteiro:\n");
        scanf("%d",&num);
        
        if(num == -1) {
            break;
        }
        
        total++;

        if(num > 0){
            positivos++;
            SomaPositivos = SomaPositivos + num;
        }
        else if(num < 0) {
            negativos++;
        }
        else {
            zeros++;
        }
    }

        if (positivos > 0) {
            media = (float)SomaPositivos / positivos;
        }
        else {
            media = 0.00;
        }

        printf("%d %d %d %d %.2f\n", total, positivos, negativos, zeros, media);

    system("pause");
    return 0;
}