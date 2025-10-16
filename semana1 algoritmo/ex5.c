#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro entre [1000,9999]:");
    scanf("%d", &numero);

    if (numero < 1000 || numero > 9999) {
        printf("Numero fora do intervalo especificado.\n");
    }

    int milhar = numero / 1000;
    int centena = (numero / 100) % 10;
    int dezena = (numero / 10) % 10;
    int unidade = numero % 10;

    if (milhar == unidade && centena == dezena) {
        printf("%d eh um palindromo.\n",numero);
    } else {
        printf("%d nao eh um palindromo.\n",numero);
    }

    return 0;
}

