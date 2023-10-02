#include <stdio.h>
// 5 . Faça um programa que leia um vetor com tamanho 10 de números inteiros. Após ler, uma função deve criar
// um novo vetor com base no primeiro, mas, o novo vetor deve ser ordenado de forma crescente. O programa
// deve imprimir este novo vetor após a ordenação.

void ordenarCrescente(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            int temp = vetor[i];
            vetor[i] = vetor[minIndex];
            vetor[minIndex] = temp;
        }
    }
}

void main()
{
    int vetorOriginal[10];
    int vetorOrdenado[10];

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorOriginal[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetorOrdenado[i] = vetorOriginal[i];
    }

    ordenarCrescente(vetorOrdenado, 10);

    printf("Vetor ordenado de forma crescente:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorOrdenado[i]);
    }

    printf("\n");
}