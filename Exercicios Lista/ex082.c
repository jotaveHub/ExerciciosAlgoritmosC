/*  Escreva um programa que leia as três notas de um aluno e verifique se o mesmo está 
aprovado por média, se fará prova final ou se está reprovado por média. Caso o aluno 
tenha  que  fazer  a  prova  final,  o  programa  deve  informar  quanto  ele  terá  que  tirar  na 
prova.  Você  pode  considerar  que  a  média  mínima  para  a  aprovação  por  média  é  7  e 
que  a média mínima  para fazer  a  prova  final  é  4. O  cálculo  da  prova  final é  calculado 
através da fórmula abaixo.
*/

#include <stdio.h>

int main (){
    float nota1,nota2,nota3 ;
    printf("Informe as Tres Notas : ");
    scanf("%f %f %f", &nota1,&nota2,&nota3);

    float media = ( nota1 + nota2 + nota3) / 3.0;
    if (media >= 7.0){
        printf("Aprovado por media %.2f\n",media);
    }
    else if (media >= 4.0) {
        float nota_final = (25 - 3 * media) / 2 ;
        printf("Prova final! precisa de : %.2f\n",nota_final);
    }
    else { printf("Reprovado por media %.2f\n",media);
    }
    return 0;
   }
