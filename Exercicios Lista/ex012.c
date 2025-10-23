#include <stdio.h>

   int main () {
   float pol1,result;
   printf("Digite o valor em polegadas:");
   scanf("%f",&pol1);

   float valorpol = 2.54 ;
   result = valorpol * pol1;

   printf("O valor em centimetros equivale a : %.2f\n", result);
   return 0;
   }
