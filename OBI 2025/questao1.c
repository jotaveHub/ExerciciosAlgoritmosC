#include <stdio.h>
#include <stdlib.h>

int modulo (int resultado) {
    if (resultado < 0 ) {
        resultado = resultado * -1;
    }
    return resultado;
}
int main () {
    system("chcp 65001");
    int E,S,L;
    printf("Informe a posição em metros da Escola(E),Supermercado(S) e Lojinha(L):");
    scanf("%d %d %d",&E,&S,&L);
    int distancia_total,distanciaEparaS,distanciaSparaL,distanciaLparaE;
    distanciaEparaS = modulo(E - S);
    distanciaSparaL = modulo(S - L);
    distanciaLparaE = modulo(L - E);

    distancia_total = distanciaEparaS + distanciaSparaL + distanciaLparaE;
    printf("%d",distancia_total);
    return 0;
}