/* Escreva  um  programa  que  leia  o  valor  dos  dois  catetos  de  um  triângulo  retângulo  e 
calcule o valor da hipotenusa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalcularHipotenusa(float cateto1,float cateto2) {
    float hiponetusa = pow(cateto1,2) + pow(cateto2,2);
    float Raiz_hipotenusa = sqrt(hiponetusa);
    return Raiz_hipotenusa;
}

int main() {
    system("chcp 65001 > NUL");
    float cateto1,cateto2;

    printf("informe os valores do catetos do triângulo:");
    scanf("%f %f",&cateto1,&cateto2);

    printf("O valor da hipotenusa é: %.2f\n",CalcularHipotenusa(cateto1,cateto2));
    
    system("pause");
    return 0;
}