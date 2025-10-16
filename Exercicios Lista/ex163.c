/*O  IFPB  precisa  de  um  programa  que  faça  a  correção  automática  das  provas  do  seu 
teste  de  seleção.  A  prova,  que  é  a  mesma  para  todos  os  alunos,  consiste  de  dez questões  objetivas,  cuja  resposta  deve  ser  (a,  b,  c,  d  ou  e).  O  programa  deve  ler  o 
gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no seu  cartão  de  respostas.  Para  cada  candidato,  o  programa  deve  imprimir  o  seu percentual de acertos. O processamento deve ser encerrado quando for encontrado um candidato com o nome  ́fim’, que não deve ser processado. O programa deve imprimir também a pontuação média dos candidatos.*/

#include <stdio.h>
#include <string.h>
const int tamanho = 11;

int main () {
    char gabarito[tamanho],nome[50],cartaoResposta[tamanho];
    printf("Informe o gabarito da prova:");
    fgets(gabarito,tamanho,stdin);
    gabarito[strcspn(gabarito, "\n")] = '\0';
    fflush(stdin);
    int acertos = 0,porcentagemAcertos,pontuacaoMedia;
    int somaPercentuais = 0,candidatos = 0;
do {
    printf("Insira seu nome:");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome, "\n")] = '\0';
    fflush(stdin);
    if ((strcmp(nome, "fim") == 0)) {
    break;
    }
    printf("Informe o seu cartao resposta:");
    fgets(cartaoResposta,sizeof(cartaoResposta),stdin);
    fflush(stdin);
    acertos = 0;
    for (int i=0; i<tamanho-1; i++) {
            if(gabarito[i] == cartaoResposta[i]) {
                acertos++;
            }
        }
        porcentagemAcertos = ((float)acertos / (tamanho-1) ) * 100;
        printf("Percentual de acertos de %s foi: %.d%%\n", nome, porcentagemAcertos);
        candidatos++;
    somaPercentuais = somaPercentuais + porcentagemAcertos;
    pontuacaoMedia = (somaPercentuais / candidatos) / 10;
    }
while (1);
    if(candidatos > 0) {
    printf("A pontuacao media dos candidatos foi:%d",pontuacaoMedia); 
}
    else {
        printf("Nao houve candidatos.\n");
    }
    return 0;
}
