#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    else {
        return n * fatorial(n-1);
    }
}

int main () {
    int num = 5;
    int CalculoFatorial= fatorial(num);
    printf("O fatorial de %d é:%d",num,CalculoFatorial);
    return 0;
}