#include <stdio.h>
// 4. Faça um programa que leia um vetor com tamanho 10 de números inteiros. Após ler, uma função deve
// verificar se o vetor está ordenado, de forma crescente ou decrescente, ou se não está ordenado. Imprimir essa
// resposta no final do programa.

int verificarOrdenacao(int vetor[], int tamanho)
{
    int crescente = 1;
    int decrescente = 1;

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > vetor[i - 1])
        {
            decrescente = 0;
        }
        else if (vetor[i] < vetor[i - 1])
        {
            crescente = 0;
        }
    }

    if (crescente)
    {
        return 1;
    }
    else if (decrescente)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int vetor[10];

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int resultado = verificarOrdenacao(vetor, 10);

    if (resultado == 1)
    {
        printf("O vetor está ordenado de forma crescente.\n");
    }
    else if (resultado == -1)
    {
        printf("O vetor está ordenado de forma decrescente.\n");
    }
    else
    {
        printf("O vetor não está ordenado.\n");
    }
}
