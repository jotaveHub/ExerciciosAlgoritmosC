/*Escreva um programa que leia três números e seus respectivos pesos e calcule a sua
média ponderada.*/

#include <stdio.h>
#include <conio.h>
 
int main () {
    int n1,n2,n3;
    printf("Digite as 3 notas :");
    scanf("%d %d %d",&n1,&n2,&n3);

    int media = (n1 + n2 + n3) / 3 ;
    printf("A media final obtida foi : %.d\n", media);
    getch ();
}