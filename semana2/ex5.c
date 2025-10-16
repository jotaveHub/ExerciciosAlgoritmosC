#include <stdio.h>
#include <string.h>

int main () {
    char verbo[30];
    char radical[30];
    int len;

    printf("digite um verbo Regular no infinitivo:");
    scanf("%s",verbo);

    len = strlen(verbo);

    if(len<3) {
        printf("Verbo Invalido.\n");
        return 1;
    }

    strncpy(radical,verbo,len - 2);
    radical[len -2] = '\0';

    //\"%s"\ eh usado para deixar o nome do verbo em uma lina unica, deixando o codigo mais organizado.
    if(strcmp(&verbo[len-2],"ar")==0) {
        printf("Presente do indicativo de \"%s\":\n", verbo);
        printf("Eu %so\n", radical);
        printf("Tu %sas\n", radical);
        printf("Ele/ela %sa\n", radical);
        printf("Nos %samos\n", radical);
        printf("Vos %sais\n", radical);
        printf("Eles/elas %sam.\n", radical);
    }
    else if(strcmp(&verbo[len-2],"er")==0) {
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/ela %se\n", radical);
        printf("Nos %semos\n", radical);
        printf("Vos %seis\n", radical);
        printf("Eles/elas %sem.\n", radical);
    }
    else if(strcmp(&verbo[len - 2],"ir")==0) {
        printf("Presente do indicativo de \"%s\":\n", verbo);
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/ela %se\n", radical);
        printf("Nos %simos\n", radical);
        printf("Vos %sis\n", radical);
        printf("Eles/elas %sem.\n", radical);
    }
    else {
        printf("Verbo nao pertence a 1ª, 2ª ou 3ª conjugaçao regular.\n");
    }
    return 0;
}
