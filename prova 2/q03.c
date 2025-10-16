#include <stdio.h>

const int ordem = 3;

int main () {
    int matriz[ordem][ordem];
    int i,j, ehsimetrica=1;

    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("elementos [%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            if(matriz[i][j] != matriz[j][i]){
                ehsimetrica = 0;
            }
        }
    }
    if(ehsimetrica){
        printf("A matriz eh simetrica.\n");
    } else {
        printf("A matriz nao eh simetrica.\n");
    }

    return 0;
}