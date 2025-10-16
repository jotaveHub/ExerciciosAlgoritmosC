#include <stdio.h>

int main() {
     int x,k,num_primo;

     printf("Numeros Primos de 1 a 100.\n");

     for(x=2; x<=100; x++) {
        num_primo = 1;
     for(k=2; k*k <=x; k++) {
        if(x % k ==0) {
            num_primo = 0; break;
        }   
     }
     if(num_primo) {
        printf("%d ",x);
     }
     }
    return 0;
}
