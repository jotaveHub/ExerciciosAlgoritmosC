#include <stdio.h>

int main() {
    int k, votosJoao = 0, votosMaria = 0, votosMarcos = 0, votosAna = 0;
    int voto, totalVotos = 0;

    printf("Eleicao para Presidente de Turma\n");
    printf("Candidatos:\n");
    printf("1 - João\n");
    printf("2 - Maria\n");
    printf("3 - Marcos\n");
    printf("4 - Ana\n\n");

    for (k = 1; k <= 20; k++) {
        printf("Informe o voto %d (1-4): ", k);
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                votosJoao++;
                totalVotos++;
                break;
            case 2:
                votosMaria++;
                totalVotos++;
                break;
            case 3:
                votosMarcos++;
                totalVotos++;
                break;
            case 4:
                votosAna++;
                totalVotos++;
                break;
            default:
                printf("Voto invalido: Escolha entre (1-4).\n");
                k--;
        }
    }

    int porcentagem_joao = (votosJoao * 100) / totalVotos;
    int porcentagem_maria = (votosMaria * 100) / totalVotos;
    int porcentagem_marcos = (votosMarcos * 100) / totalVotos;
    int porcentagem_ana = (votosAna * 100) / totalVotos;

    printf("\nResultados da Eleicao:\n");
    printf("Joao: %d votos (%.d%%)\n", votosJoao, porcentagem_joao);
    printf("Maria: %d votos (%.d%%)\n", votosMaria, porcentagem_maria);
    printf("Marcos: %d votos (%.d%%)\n", votosMarcos, porcentagem_marcos);
    printf("Ana: %d votos (%.d%%)\n", votosAna, porcentagem_ana);
    

    return 0;
}

