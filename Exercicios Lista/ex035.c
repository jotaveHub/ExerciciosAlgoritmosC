//Escreva um programa que leia o valor de uma distância em metros e calcule o seu valor correspondente 
//em quilômetros, hectômetros, decâmetros, centímetros, decímetros e milímetros.



#include <stdio.h>

int main() {
    float distancia;

    printf("Informe a distância (em metros): ");
    scanf("%f", &distancia);

    printf("\nConversoes:\n");
    printf("Quilometros (km): %.3f\n", distancia / 1000);
    printf("Hectometros (hm): %.3f\n", distancia / 100);
    printf("Decametros (dam): %.3f\n", distancia / 10);
    printf("Decimetros (dm): %.3f\n", distancia * 10);
    printf("Centimetros (cm): %.3f\n", distancia * 100);
    printf("Milimetros (mm): %.3f\n", distancia * 1000);

    return 0;
}

