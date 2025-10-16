/*O IFPB precisa de um programa para fazer a correção automática do seu teste de
seleção. A prova é composta por dez questões objetivas, cuja resposta é uma
letra (a, b, c, d ou e). Inicialmente, o programa deve ler o gabarito. Depois, o
programa deve ler o cartão de respostas de três candidatos e verificar quantas
questões cada um deles acertou. O programa deve ter pelo menos três
subprogramas: um para ler um vetor de caracteres, um subprograma para
imprimir um vetor de caracteres e outro para comparar o cartão de
respostas com o gabarito para calcular o número de acertos de um
candidato. O programa deve imprimir o gabarito, o cartão de respostas e o
número de acertos de cada candidato.*/

#include <stdio.h>
#include <stdlib.h>
const int QntdQuestoes = 10;
const int QntdCandidatos = 3;

void lerVetor(char Gabarito[QntdQuestoes]) {
    for(int k = 0; k< QntdQuestoes; k++) {
        printf("Questao %d: ",k+1);
        scanf(" %c", &Gabarito[k]); 
    }
}
void ImprimirVetor(char Gabarito[QntdQuestoes]) {
    for(int k = 0; k< QntdQuestoes; k++) {
        printf("%c ",Gabarito[k]);
    }
    printf("\n");
}
int CompararVetores(char Gabarito[QntdQuestoes],char Respostas[QntdQuestoes]) {
    int acertos = 0;
    for(int i = 0; i<QntdQuestoes; i++) {
        if (Gabarito[i] == Respostas[i]) {
            acertos++;
        }
    }
    return acertos;
}

int main () {
    system("chcp 65001");
    char Gabarito[QntdQuestoes], Respostas[QntdCandidatos][QntdQuestoes];

    printf("Informe o gabarito ex:(ABCDEEDCBA):\n");
    lerVetor(Gabarito);

    for(int k = 0; k<QntdCandidatos; k++) {
        printf("Informe o CartaoResposta do candidato %d:\n",k+1);
        lerVetor(Respostas[k]);
    }
    for(int k = 0; k<QntdCandidatos; k++) {
        printf("Candidato %d:\n",k+1);
        printf("Gabarito :\n");
        ImprimirVetor(Gabarito);
        printf("Cartao Resposta :\n");
        ImprimirVetor(Respostas[k]);
        printf("Quantidade acertos: %d\n",CompararVetores(Gabarito, Respostas[k]));
    }
    return 0;
}

