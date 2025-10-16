#include <stdio.h>
const int linhas=3;
const int colunas=3;

int main () {
    int matriz[linhas][colunas],i,j,ehidentidade=1;
    for(i=0; i<linhas; i++) {
        for(j=0; j<linhas; j++) {
            printf("Elemento[%d][%d]:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(i=0; i<linhas; i++) {
        for(j=0; j<linhas; j++) {
            if(i == j && matriz[i][j] != 1) {
                ehidentidade=0;
            }
            else if(i != j && matriz[i][j] != 0) {
                ehidentidade=0;
            }
       }
    }
    if(ehidentidade) {
        printf("A matriz Eh identidade.\n");
    }
    else {
        printf("A matriz NAO eh identidade.\n");
    }
return 0;
}