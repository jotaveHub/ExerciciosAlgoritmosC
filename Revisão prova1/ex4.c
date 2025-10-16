/*Escreva um programa que leia a nota de duas provas (de 0 a 10) e diga se o aluno:
- Tirou nota maxima em alguma prova
- Melhorou da primeira para a segunda
- Manteve a mesma nota
- Foi pior na segunda*/

#include <stdio.h>

int main () {
    int nota1,nota2;

    printf("Informe as notas das provas de (1 a 10).\n");
    printf("Informe a nota da primeira prova:");
    scanf("%d",&nota1);
    printf("Informe a nota da segunda prova:");
    scanf("%d",&nota2);

    if(nota1 == 10 || nota2 == 10) {
        printf("O aluno tirou nota maxima em alguma prova.\n");
    }
    else if(nota1 < nota2) {
        printf("O aluno melhorou a nota.\n");
    }
    else if(nota1 == nota2) {
        printf("Manteve a mesma nota.\n");
    }
    else {
        printf("O aluno piorou a nota.\n");
    }
    return 0;
}