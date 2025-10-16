/*O IFPB precisa de um programa que faça a correção automática das provas do
seu teste de seleção. A prova, que é a mesma para todos os alunos, consiste de
dez questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa, que
deve ser escrito na linguagem C, deve ler o gabarito da prova e, a seguir, as
opções que aparecem no cartão de respostas de um candidato. Depois disso, o
programa deve imprimir o número de questões que o candidato acertou.*/

#include <stdio.h>
const int tamanho = 10;

int main () {
    char gabarito[tamanho],cartaoResposta[tamanho];
    int Totalacertos = 0;
        printf("Informe o gabarito (ex:ABCDEEDCBA):");
        scanf(" %s",gabarito);       
        printf("Informe o cartao resposta (ex:ABCDEEDCBA):");
        scanf(" %s",cartaoResposta);
        for(int k=0; k<tamanho; k++) {
            if(gabarito[k] == cartaoResposta[k]) {
            Totalacertos ++;
    }
}
    printf("O candidato acertou %d questoes.\n",Totalacertos);
return 0;
}