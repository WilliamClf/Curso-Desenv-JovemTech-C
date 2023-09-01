#include <stdio.h>
// 17. Crie um programa em C que possa ler um conjunto de pedidos de compra e
// calcule o valor total da compra. Cada pedido é composto pelos seguintes campos:
// • número de pedido
// • data do pedido (dia, mês, ano)
// • preco unitário
// • quantidade
// O programa deverá processar novos pedidos até que o usuário digite 0 (zero) como número do
// pedido.

void main()
{
    int numPedido;
    char data[100];
    float precoUni = 0;
    int quantidade = 0;
    float precoFinal = 0;

    while (numPedido != 0)
    {
        printf("Insira o numero do seu pedido!: \n");
        scanf("%d", &numPedido);
        scanf("%*c");

        if (numPedido == 0)
        {
            printf("Fim!");
        }
        else
        {
            printf("Insira a data(dia, mes, ano):\n");
            scanf("%[^\n]%*c", &data);
            scanf("%*[^\n]");
            scanf("%*c");

            printf("Insira o preco unitário do produto: \n");
            scanf("%f", &precoUni);
            scanf("%*c");

            printf("Insira a quantidade de produtos: \n");
            scanf("%d", &quantidade);
            scanf("%*c");

            precoFinal = precoUni * quantidade;

            printf("O preco do seu pedido será %f RS\n", precoFinal);

            printf("Digite 0 no numero do pedido caso queira finalizar!\n");
        }
    }
}