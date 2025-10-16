/*O aluno fez três provas (P1, P2, P3) e uma prova final (PF).
•Calcule a média parcial MP considerando apenas as duas maiores entre P1, P2, P3 (descarte
a menor). Exiba MP=%0.2f.
•Se MP ≥7.0, exiba Situacao: Aprovado (ignorar a PF).
•Se 5.0 ≤MP < 7.0, calcule a média final MF = 0,6 ·MP + 0,4 ·P F . Exiba MF=%0.2f e:
– se MF ≥6.0: Situacao: Aprovado;
– caso contrário: Situacao: Reprovado.
•Se MP < 5.0: Situacao: Reprovado.
Entrada
5.0 6.0 4.0 7.5
Saída esperada
MP=5.50
MF=6.30
Situacao: Aprovado*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    float p1,p2,p3;
    printf("Informe as notas das três provas:");
    scanf("%f %f %f",&p1,&p2,&p3);
    float mediaparcial;
    float mediafinal;

    if(p1 <= p2 && p2<=p3)  {
        mediaparcial = (p2 + p3) /2.0;
    }
    else if(p2 <= p1 && p1 <= p3) {
        mediaparcial = (p1 + p3) / 2.0;
    }
    else {
        mediaparcial = (p1 + p2) / 2.0;
    }
    if(mediaparcial >= 7.0) {
        printf("MP=%0.2f Situação: Aprovado.\n", mediaparcial);
    }
    else if( mediaparcial < 5.0) {
        printf("MP=%0.2f Situação: Reprovado.\n", mediaparcial);
    }

    if (mediaparcial >= 5.0 && mediaparcial < 7.0) {
        float provafinal;
        printf("Informe a nota da prova final:");
        scanf("%f",&provafinal);
        mediafinal = 0.6 * mediaparcial + 0.4 * provafinal;
    }
    if (mediaparcial >= 5.0 && mediaparcial < 7.0) {
        if (mediafinal >= 6.0) {
            printf("MF=%0.2f Situação: Aprovado.\n", mediafinal);
        }
        else {
            printf("MF=%0.2f Situação: Reprovado.\n", mediafinal);
        }
    }
    return 0;
}