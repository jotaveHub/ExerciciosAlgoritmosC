#include <stdio.h>
#include <conio.h>

int main () {
    int lado;
    printf("Informe o valor do lado :");
    scanf("%d",&lado);

    int area_quadrado = lado * lado ;
    int perimetro = lado * 4 ;
    printf("A area do quadrado eh : %d m\n", area_quadrado);
    printf("O valor do perimetro do quadrado eh : %d m\n ", perimetro);
    return 0;
    getch();
}