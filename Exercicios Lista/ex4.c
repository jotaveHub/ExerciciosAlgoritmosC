#include <stdio.h>
#include <math.h>

  int main () {
     int dobro,triplo, quadrado, cubo, raiz_quadrada, valor;
     printf("Digite o valor:");
     scanf("%d", &valor);

     dobro = 2 * valor ;
     triplo = 3 * valor;
     quadrado = pow (valor,2);
     cubo = pow (valor,3);
     raiz_quadrada = sqrt (valor);

     printf("O dobro do valor eh: %d\n", dobro);
     printf("O triplo do valor eh: %d\n", triplo);
     printf("O quadrado do valor eh: %d\n", quadrado);
     printf("O cubo do valor eh: %d\n", cubo);
     printf("A raiz quadrada do valor eh: %d\n", raiz_quadrada);
     return 0;
    }
