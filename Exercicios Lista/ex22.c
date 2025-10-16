#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, maior_multiplo;

    printf("Digite o valor de a:");
    scanf("%d", &a);
    printf("Digite o valor de b:");
    scanf("%d", &b);

    maior_multiplo = (b / a) * a;
    printf("O maior multiplo de %d menor ou igual a %d eh:%.d\n", a, b, maior_multiplo);
    getch();
}
