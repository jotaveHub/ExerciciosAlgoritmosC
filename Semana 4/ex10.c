/*Recentemente,  os  cientistas  descobriram  o  que  muitas  pessoas  j·  desconfiavam:  o 
talento  para  a  programaÁ„o  est·  no  DNA,  por  meio  dos  cromossomos  ADS.  Os 
cientistas  descobriram  que  as  pessoas  que  apresentam  os  cromossomos  ADS  em 
sequÍncia possuem uma alta aptid„o para a programaÁ„o. As pessoas que 
apresentam  os  cromossomos  ADS  nessa  ordem,  mas  n„o  em  sequÍncia,  possuem 
aptid„o mÈdia. Por fim, as pessoas que n„o apresentam os cromossomos ADS nessa 
ordem  possuem  baixa  aptid„o  para  a  programaÁ„o.  Com  base  nessas  informaÁıes, 
escreva  um  programa  que  leia  a  sequÍncia  dos  cromossomos  de  uma  pessoa  e 
verifique qual a sua aptid„o para a programaÁ„o. Para isso, considere que a sequÍncia 
de cromossomos de uma pessoa È uma sequÍncia composta por dez letras 
mai ̇scula. Por exemplo, se a pessoa tiver uma sequÍncia de cromossomos 
ABCXDADSZW,  ela  tem  alta  aptid„o  para  a  programaÁ„o.  Se  a  pessoa  tiver  uma 
sequÍncia de cromossomos AXXYDRESWS, ela tem uma aptid„o mÈdia. Por fim, se ela 
tiver uma sequÍncia RTSDADXRTE, ela tem baixa aptidao. 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char cromossomos[11]; // 10 letras + '\0'
    printf("Digite a sequencia de 10 cromossomos: ");
    scanf("%10s", cromossomos);

    // Verifica alta aptidão: ADS em sequência exata
    if (strstr(cromossomos, "ADS") != NULL) {
        printf("Alta aptidao para a programacao.\n");
        return 0;
    }

    // Verifica aptidão média: A, D, S nessa ordem (não juntos), usando contador
    int etapa = 0;

    for (int i = 0; i < 10; i++) {
        if (etapa == 0 && cromossomos[i] == 'A') {
            etapa++;
        }
        if (etapa == 1 && cromossomos[i] == 'D') {
            etapa++;
        }
        if (etapa == 2 && cromossomos[i] == 'S') {
            etapa++;
        }
    }

    if (etapa == 3) {
        printf("Aptidao média para a programacao.\n");
    } else {
        printf("Baixa aptidão para a programacao.\n");
    }

    return 0;
}
