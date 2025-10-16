/*Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para 
cada  item,  o  usuário  deve  informar  o  seu  nome,  o  seu  preço  unitário  e  a 
quantidade comprada. Após cada leitura, o programa deve perguntar ao usuário 
se ele deseja 
adicionar  um  novo  item  ou  fechar  a  conta.  O  programa  deve  considerar que o 
usuário  irá digitar pelo menos um item. Após terminar a leitura, o programa deve 
mostrar o   valor da conta à vista e o valor da conta a prazo. O valor da conta a 
prazo corresponde   à soma do valor total de cada item digitado pelo usuário. O 
valor da conta à vista  corresponde ao valor da conta a prazo com um desconto de 
15%. */


#include <stdio.h>

int main() {
    char produto[20];
    float valor_produto, total_prazo = 0, total_avista;
    int quantidade;
    char opcao;

    do {
        printf("Informe o Produto, o valor e a quantidade comprada: ");
        scanf("%19s %f %d", produto, &valor_produto, &quantidade);

        total_prazo += valor_produto * quantidade;

        printf("Deseja adicionar novo item ou fechar a conta? (S) para Adicionar, (F) para Fechar: ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    total_avista = total_prazo * 0.85;

    printf("Valor total a prazo: %.2f\n", total_prazo);
    printf("Valor total a vista (com 15%% de desconto): %.2f\n", total_avista);

    return 0;
}