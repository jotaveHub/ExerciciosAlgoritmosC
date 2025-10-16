/*O IFPB precisa de um programa que faça a correção automática das provas do seu
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o as opções que aparecem no seu cartão de respostas de
5 candidatos. Para cada candidato, o programa deve imprimir o seu total de acertos.*/

#include <stdio.h>
#include <string.h>

const int qntdAlunos = 5;
const int questoes = 10;

int main () {
    char gabarito[questoes + 1];
    char cartaoResposta[questoes + 1];
    int totalAcertos;
    int k, j;
    printf("Informe o gabarito da prova (ex: ABCDEABCDE): ");
    scanf("%s", gabarito);
    for (k = 0; k < qntdAlunos; k++) {
        totalAcertos = 0;
        printf("\nInforme o cartao resposta do candidato %d: ", k + 1);
        scanf("%s", cartaoResposta);

        for (j = 0; j < questoes; j++) {
            if (gabarito[j] == cartaoResposta[j]) {
                totalAcertos++;
            }
        }
        printf("O candidato %d teve o total de %d acertos!\n", k + 1, totalAcertos);
    }
    return 0;
}

