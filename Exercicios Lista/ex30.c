#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    float x1, y1, x2, y2;
    printf("Digite as coordenadas do ponto P (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do ponto Q (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distancia entre os pontos P e Q eh: %.2f\n", distancia);
    getch();
}

