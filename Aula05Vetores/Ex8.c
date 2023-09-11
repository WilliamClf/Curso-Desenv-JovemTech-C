#include <stdio.h>
// 8. Construa um programa que armazene o código, a quantidade, o valor de compra e o valor de venda de 30
// produtos. A listagem pode ser de todos os produtos ou somente de uma o se digitar o código.
void main()
{
    int codigoProduto[30];
    int quantidadeProduto[30];
    float valorCompra[30];
    float valorVenda[30];
    int tipoLista;
    int codigoBuscado;

    for (int i = 0; i < 30; i++)
    {
        printf("Insira o código do produto: ");
        scanf("%d", &codigoProduto[i]);
        scanf("%*c");

        printf("Insira a quantidade de produtos: ");
        scanf("%d", &quantidadeProduto[i]);
        scanf("%*c");

        printf("Insira o valor de compra do produto: ");
        scanf("%f", &valorCompra[i]);
        scanf("%*c");

        printf("Insira o valor de venda: ");
        scanf("%f", &valorVenda[i]);
        scanf("%*c");
    }

    printf("Qual Listagem voce prefere? 1-Todos os produtos ou 2-Produto específico\n");
    scanf("%d", &tipoLista);

    if (tipoLista == 1)
    {
        printf("Listagem de todos os produtos!\n");

        for (int i = 0; i < 30; i++)
        {
            printf("Produto: %d", i + 1);
            printf("Código do produto: %d\n", codigoProduto[i]);
            printf("Quantidade de produtos: %d\n", quantidadeProduto[i]);
            printf("Valor de compra do produto: %f\n", valorCompra[i]);
            printf("Valor de venda do produto: %f\n", valorVenda[i]);
        }
    }
    else if (tipoLista == 2)
    {
        printf("Insira o código do produto que deseja buscar: ");
        scanf("%d", &codigoBuscado);
        scanf("%*c");

        for (int i = 0; i < 30; i++)
        {
            if (codigoProduto[i] == codigoBuscado)
            {
                printf("Produto: %d", i + 1);
                printf("Código do produto: %d\n", codigoProduto[i]);
                printf("Quantidade de produtos: %d\n", quantidadeProduto[i]);
                printf("Valor de compra do produto: %f\n", valorCompra[i]);
                printf("Valor de venda do produto: %f\n", valorVenda[i]);
            }
        }
    }
}