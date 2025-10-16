#include <stdio.h>

int main() {
    int M,N;
    int k;

    printf("Informe o Valor de M e de N:");
    scanf("%d %d",&M,&N);

    if(M > N) {
        printf("Intervalo Invalido:M deve ser Menor que N.\n");
        return 1;
    }

    printf("Numeros no intervalo [%d,%d]:\n",M,N);
    for(k=M; k<=N; k++) {
        printf("%d.",k);
    }
    return 0;
}
