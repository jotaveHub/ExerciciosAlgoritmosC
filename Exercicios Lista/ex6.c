#include <stdio.h>

int main () {
    int num;
    printf("informe um numero :");
    scanf("%d", &num);

    int antecessor = num - 1 ;
    int sucessor = num + 1 ;

    printf("O antecessor do numero eh : %.d\n",antecessor);
    printf("O sucessor do numero eh : %d\n",sucessor);
}
