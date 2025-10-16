/*Calcule a frequência como porcentagem: Freq = 100 ·
N−F
N
e imprima
com 1 casa. A ordem dos testes importa:
• se Freq < 75, reprovação por falta independente das notas;
• caso passe na frequência, verifique a nota mínima: se P1 < 4.0 e P2 < 4.0, reprovação por
nota mínima;
• caso contrário, use a média M = (P1 +P2)/2: se M ≥ 7.0 aprovado; se 4.0 ≤ M < 7.0 prova
final;
• se M < 4.0 reprovado por média.
• Imprima Frequencia=%0.1f% e Media=%0.2f antes da situação.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    system("chcp 65001");
    float p1,p2;
    float presencas,faltas;

    printf("Informe o número de presenças e de faltas do aluno:");
    scanf("%f %f",&presencas,&faltas);

    printf("Informe a primeira e a segunda nota:");
    scanf("%f %f",&p1,&p2);

    float frequencia = 100 * ((presencas - faltas) / presencas);
    float Media = (p1 + p2) / 2.0;
    
    if (frequencia < 75.0) {
        printf("Frequencia=%0.1f%%\n",frequencia);
        printf("Media=%0.2f\n",Media);
        printf("Situação: Reprovado.\n");
        return 1;
    }

    if(p1 < 4.0 && p2 < 4.0) {
        printf("Frequencia=%0.1f%%\n",frequencia);
        printf("Media=%0.2f\n",Media);
        printf("Situação: Reprovado.\n");
        return 1;
    }
    
    if (Media >= 7.0) {
        printf("Frequencia=%0.1f%%\n",frequencia);
        printf("Media=%0.2f\n",Media);
        printf("Situação: Aprovado\n.");
    } 
    else if (Media >= 4.0 && Media < 7.0) {
        printf("Frequencia=%0.1f%%\n",frequencia);
        printf("Media=%0.2f\n",Media);
        printf("Situação: Prova final\n.");
    }
    else {
        printf("Frequencia=%0.1f%%\n",frequencia);
        printf("Media=%0.2f\n",Media);
        printf("Situação: Reprovado\n.");
    }   
    return 0;
}