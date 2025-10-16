/*Escreva um programa que leia o número de pessoas que vão participar de
 um churrasco e calcule quantos quilos de carne devem ser comprados. Para isso, considere que cada pessoa consome 250 g de carne.*/
 
 #include <stdio.h>
const float gramas_pessoa = 250.0;

int main () {
    int num_pessoas;
    printf("Informe a quantidade de pessoas no churrasco:");
    scanf("%d",&num_pessoas);

    float kg_necessarios = (gramas_pessoa * num_pessoas) / 1000;
    printf("A quantidade de quilos necessarias para o churrasco eh : %.1fkg.\n",kg_necessarios);
    return 0;
}
