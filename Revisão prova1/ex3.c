/*Escreva  um  programa  que  leia  uma  letra  do  alfabeto  e  informe  se  ela  é uma  vogal,  uma
consoante ou um caractere invalido*/

#include <stdio.h>
#include <ctype.h>

int main () {
    char letra[2];
    printf("Informe uma letra do alfabeto:");
    fgets(letra, sizeof(letra), stdin);
    letra[0] = tolower(letra[0]);

    if(letra[0] == 'a' || letra[0] == 'e' || letra[0] == 'i' || letra[0] == 'o' || letra[0] == 'u') {
        printf("%c eh uma vogal.", letra[0]); }
    else if((letra[0] >= 'b' && letra[0] <= 'z') && !(letra[0] == 'e' || letra[0] == 'i' || letra[0] == 'o' || letra[0] == 'u')) {
        printf("%c eh uma consoante.", letra[0]);
    }
    else {
        printf("%c e um caractere invalido.", letra[0]);
    }
    return 0;
}