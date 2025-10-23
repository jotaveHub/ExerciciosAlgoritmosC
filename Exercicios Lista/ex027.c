#include <stdio.h>
#include <conio.h>

void main () {
	float comprimento,largura,litros_desejados;
	printf("Informe o comprimento (em metros):");
	scanf("%f",&comprimento);
	printf("Informe a largura (em metros):");
	scanf("%f",&largura);
	printf("Informe a quantidade de litros desejados:");
	scanf("%f",&litros_desejados);
	
	float area_cisterna = comprimento * largura;
	float volume_m3 = litros_desejados / 1000;
	float altura = volume_m3 / area_cisterna;
	
	printf("Voce deve encher a cisterna ate %f metros de altura.\n",altura);
	getch ();
}
