#include <stdio.h>

int main () {
    int tamanho_mb,taxa_download;
    printf("Informe o tamanho do arquivo e a taxa de download :");
    scanf("%d %d",&tamanho_mb,&taxa_download);

    long tamanho_kb = tamanho_mb * 1024;
    int total = tamanho_kb / taxa_download;
    int horas = total / 3600;
    int resto = total % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    printf("%d horas, %d minutos , %d segundos\n",horas,minutos,segundos);
    return 0;
    }
