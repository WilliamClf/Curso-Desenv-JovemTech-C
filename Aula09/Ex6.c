#include <stdio.h>
// 6. Faça um programa que leia 20 de números inteiros e armazene em um vetor. Após essa leitura, o programa
// deve ler um novo número inteiro para ser buscado no vetor. Uma função deve verificar se o número lido por
// último está no vetor e retornar a posição do número no vetor, caso esteja, ou -1, caso não esteja.

int buscarNumero(int vetor[], int tamanho, int numero)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == numero)
        {
            return i;
        }
    }
    return 1;
}

void main()
{
    int vetor[20];
    int numeroBusca;

    printf("Digite 20 números inteiros:\n");

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número inteiro para buscar no vetor: ");
    scanf("%d", &numeroBusca);

    int posicao = buscarNumero(vetor, 20, numeroBusca);

    if (posicao != 1)
    {
        printf("O número %d está na posição %d do vetor.\n", numeroBusca, posicao);
    }
    else
    {
        printf("O número %d não foi encontrado no vetor.\n", numeroBusca);
    }
}