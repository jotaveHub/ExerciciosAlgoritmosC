#include <stdio.h>
#include <math.h>
const double PI = 3.14;

int main() {
    double raio, volume;
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("O volume da esfera é: %.2lf cm³\n", volume);
    return 0;
}
