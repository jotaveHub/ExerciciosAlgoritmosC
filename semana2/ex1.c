#include <stdio.h>

int main () {
    int a1,a2,a3;
    printf("Informe o valor do angulo 1:");
    scanf("%d",&a1);

    printf("Informe o valor do angulo 2:");
    scanf("%d",&a2);

    printf("Informe o valor do angulo 3:");
    scanf("%d",&a3);

    if (a1 + a2 + a3 != 180) {
        printf("Os angulos nao formam um triangulo retangulo");
    }
    else if (a1==90 || a2==90 || a3==90 ) {
        printf("O triangulo eh retangulo.");
    }
    else { printf("O triangulo nao eh retangulo.");
    }
    return 0;
}
