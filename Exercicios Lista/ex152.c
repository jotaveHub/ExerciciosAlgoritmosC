#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Nao existe decomposicao em fatores primos para %d.\n", num);
        return 0;
    }

    printf("Decomposicao em fatores primos de %d: ", num);

    // Divide sucessivamente por todos os possíveis divisores
    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d", i);
            num = num / i;
            if (num > 1) printf(" x "); // imprime "x" entre os fatores
        }
    }

    printf("\n");
    return 0;
}

