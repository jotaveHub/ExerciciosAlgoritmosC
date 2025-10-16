#include <stdio.h>
#include <stdlib.h>
const float tarifa_base = 4.50;

int main() {
    system("chcp 65001");

    int hora, lotacao, idade, flag;

    printf("Informe a hora do embarque: ");
    scanf("%d", &hora);
    printf("Informe a lotação do ônibus: ");
    scanf("%d", &lotacao);
    printf("Informe a idade do passageiro: ");
    scanf("%d", &idade);
    printf("Informe a flag de estudante (0 ou 1): ");
    scanf("%d", &flag);

    float valorTarifa = tarifa_base;

    if (idade < 6 || idade >= 65) {
        valorTarifa = 0.00;
    }
    else {
        if ((hora >= 6 && hora < 8) || (hora >= 17 && hora < 19)) {
            valorTarifa *= 1.10;
        }
        if (lotacao > 50) {
            valorTarifa += 0.50;
        }
        if (flag == 1) {
            valorTarifa *= 0.85;
        }
    }
    printf("Tarifa=%.2f", valorTarifa);
    return 0;
}