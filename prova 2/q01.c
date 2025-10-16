#include <stdio.h>

int main () {
    int graos = 1;
    int ordem, i, j;

    printf("informe a ordem da matriz: ");
    scanf("%d", &ordem);

    int matriz[ordem][ordem];
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            matriz[i][j] = graos;
            graos = graos * 2;
        }
    }

    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%d\t", matriz[i][j]);
        }
    }
}
