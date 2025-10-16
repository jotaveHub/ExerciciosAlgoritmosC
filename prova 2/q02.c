#include <stdio.h>
const int tamanho = 100;

int main () {
    char gabarito[tamanho], cartaoResposta[tamanho];
    int totalAcertos;

    printf("Informe o gabarito (ex: ABCDEEDCBA): ");
    scanf(" %s", gabarito);

    for (int k=0; k<10; k++) {
        printf("Informe o seu cartao Resposta: ");
        scanf(" %s",cartaoResposta);
        totalAcertos = 0;
        for (int j=0; j<10; j++) {
            if (gabarito[j] == cartaoResposta[j]) {
                totalAcertos++;
            }
        }
        printf("O candidato %d acertou %d questoes.\n", k+1, totalAcertos);
    }
    return 0;
}
