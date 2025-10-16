//Cálculo do CRE .

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    float NotaDaDisciplina;
    int NumDisciplinas,CargaHoraria;
    float SomaCargaHoraria = 0,SomaNotasPonderadas = 0,CRE;

    printf("Informe o número de disciplinas:");
    scanf("%d",&NumDisciplinas);

    for(int k = 0; k < NumDisciplinas; k++) {
        printf("Informe a nota da disciplina %d:\n",k+1);
        scanf("%f",&NotaDaDisciplina);
        printf("Informe a Carga Horária da disciplina %d:\n",k+1);
        scanf("%d",&CargaHoraria);

        SomaNotasPonderadas += NotaDaDisciplina * CargaHoraria;
        SomaCargaHoraria += CargaHoraria;
    }
    if(SomaCargaHoraria > 0) {
        CRE = SomaNotasPonderadas / SomaCargaHoraria;
        printf("O CRE obtido foi: %.2f",CRE);
    }
    else {
        printf("Os valores inseridos são inválidos! Digite Novamente.");
    }
    return 0;
}