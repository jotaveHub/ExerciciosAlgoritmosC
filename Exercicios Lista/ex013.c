#include <stdio.h>

   int main () {
   double kb,bits,bytes,mb,gb;
   printf("Digite o valor em KB:");
   scanf("%lf", &kb);

   bytes = kb * 1024;
   bits = bytes * 8;
   mb = kb / 1024;
   gb = mb / 1024;


   printf("\nConversoes\n");
   printf("bits : %.0f\n",bits);
   printf("bytes : %.0f\n",bytes);
   printf("mb : %.6f\n",mb);
   printf("gb : %.9f\n",gb);

   return 0;
   }
