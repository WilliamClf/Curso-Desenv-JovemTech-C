#include <stdio.h>
// 10. O departamento comercial da Batatinha S/A necessita atualizar os valores de seus produtos no seu
// catálogo de vendas. O presidente ordenou um reajuste de 4.78% para todos os itens. São 15 itens no
// catálogo. Sua tarefa é elaborar um programa que leia o valor atual dos produtos e armazene em um vetor, e
// após isso efetue o reajuste no valor dos produtos. O reajuste (acesso ao vetor) deverá ser
// feito utilizando ponteiros. Imprima na tela o valor reajustado, usando também ponteiros.

void aplicarReajuste(float produtos[], int tamanho, float taxaReajuste)
{
    for (int i = 0; i < tamanho; i++)
    {
        produtos[i] *= (1 + taxaReajuste);
    }
}

void imprimirValores(float produtos[], int tamanho)
{
    printf("Valores reajustados:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%.2f\n", produtos[i]);
    }
}

void main()
{
    float produtos[15];
    float taxaReajuste = 0.0478; // 4.78%

    printf("Digite os valores atuais dos produtos:\n");

    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &produtos[i]);
    }

    aplicarReajuste(produtos, 15, taxaReajuste);
    imprimirValores(produtos, 15);
}