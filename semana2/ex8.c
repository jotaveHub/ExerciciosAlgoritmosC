#include <stdio.h>

int main () {
    int M,N,soma=0;
    int k;

    printf("Informe o valor de M e de N:");
    scanf("%d %d",&M,&N);

    if(M > N) {
        printf("Intervalo Invalido: O valor de M precisa ser menor igual a N");
        return 1;
    }
    for(k=M; k<=N; k++) {
        soma += k;
    }

    printf("A soma dos numeros no intervalo [%d,%d] eh: %d\n",M,N,soma);
    return 0;
}
