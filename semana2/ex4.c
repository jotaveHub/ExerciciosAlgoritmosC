#include <stdio.h>

int main () {
    int valor_sacado,resto;
    int Ced100,Ced50,Ced20,Ced10;

    printf("Informe o valor que deseja sacar:");
    scanf("%d",&valor_sacado);

    if(valor_sacado % 10 != 0 ) {
        printf("Saque invalido, para realizar o saque o valor precisa ser multiplo de 10.\n");
    }
    else {
    Ced100 = valor_sacado /100;
    resto = valor_sacado % 100;
    Ced50 = resto / 50;
    resto = resto % 50;
    Ced20 = resto / 20;
    resto = resto % 20;
    Ced10 = resto / 10;

    if(Ced100 >0) printf("%d Notas de R$100,00.\n",Ced100);
    if(Ced50 >0) printf("%d Notas de R$50,00.\n",Ced50);
    if(Ced20 >0) printf("%d Notas de R$20,00.\n",Ced20);
    if(Ced10 >0) printf("%d Notas de R$10,00.\n",Ced10);
    }
    return 0;
}
