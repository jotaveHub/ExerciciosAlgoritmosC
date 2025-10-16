#include <stdio.h>

int main () {
    int num,k;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);


    for(k=1; k <=10; k++) {
        printf("%d x %d = %d\n",k,num,num*k);
    }
    return 0;
}
