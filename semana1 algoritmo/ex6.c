#include <stdio.h>

int main() {
    float num_1, num_2, num_3, num_4;
    printf("Informe 4 numeros: ");
    scanf("%f %f %f %f", &num_1, &num_2, &num_3, &num_4);

    float razao1 = num_2 - num_1;
    float razao2 = num_3 - num_2;
    float razao3 = num_4 - num_3;

    int ehPA = (razao1 == razao2 && razao2 == razao3);

    int ehPG = 0;
    if (num_1 != 0 && num_2 != 0 && num_3 != 0) {
        float q1 = num_2 / num_1;
        float q2 = num_3 / num_2;
        float q3 = num_4 / num_3;
        ehPG = (q1 == q2 && q2 == q3);
    }

    if (ehPA && ehPG) {
        printf("Os numeros formam uma PA e uma PG.\n");
    } else if (ehPA) {
        printf("Os numeros formam uma PA.\n");
    } else if (ehPG) {
        printf("Os numeros formam uma PG.\n");
    } else {
        printf("Os numeros nao formam uma PA nem uma PG.\n");
    }

    return 0;
}

