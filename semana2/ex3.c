#include <stdio.h>

int main() {
    char estadocivil;

    printf("Informe seu estado civil (S, C, D, V) :");
    scanf(" %c",&estadocivil);

    switch(estadocivil) {
        case 's':
        case 'S': printf("Solteiro\n");break;
        case 'c':
        case 'C': printf("Casado.\n");break;
        case 'd':
        case 'D': printf("Divorciado.\n");break;
        case 'v':
        case 'V': printf("Viúvo.\n");break;
        default: printf("Informe um estado civil válido.\n");
    }
    return 0;
}
