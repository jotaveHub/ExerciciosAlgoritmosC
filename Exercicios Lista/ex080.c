/*Escreva um programa que leia os coeficientes a, b e c de uma equa��o do 2� grau e
calcule todas as suas ra�zes reais.*/

//delta = b^2 - 4.a.c;
//x = -b +- raiz de delta / 2.a;

#include <stdio.h>
#include <math.h>

int main () {
    double a,b,c;
    double raizx1,raizx2;

    printf("Informe os coeficientes da equacao: a , b , c (ax�+bx+c = 0).\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a == 0) {
        printf("Informe o valor de A diferente de 0.\n");
        return 1;
    }
    double delta = (pow(b,2) -  (4 * a *c));
    raizx1 = (-b + sqrt(delta)) / (2*a);
    raizx2 = (-b - sqrt(delta)) / (2*a);

    if(delta == 0) {
        double raiz = -b / (2*a);
        printf("Existira uma unica raiz real: %.2lf.\n",raiz);
    }
    else if(delta > 0) {
        printf("Raiz x1 da equacao eh: %.2lf.\n",raizx1);
        printf("Raiz x2 da equacao eh : %.2lf.\n",raizx2);
    }
    else {
        printf ("Raiz real inexistente.\n");
    }
    return 0;
}
