#include <stdio.h>

int main () {
    int num,k;
    int termo_anterior=1;
    int termo_atual=1;
    int proximo_termo;

    printf("Informe um numero inteiro:");
    scanf("%d",&num);
    for(k=1;k<=num;k++) {
        termo_anterior=termo_atual;
        proximo_termo=termo_anterior + termo_atual;
        termo_atual = proximo_termo;
    }
    if(num==proximo_termo) {
        printf("%d faz parte da serie de fibonacci.",num);
    }
    return 0;
}