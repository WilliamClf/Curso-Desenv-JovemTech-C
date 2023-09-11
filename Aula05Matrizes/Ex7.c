#include <stdio.h>
// 7. Construa um programa para ler valores para duas matrizes do tipo inteiro de ordem 3. Gerar e imprimir a matriz
// diferença.

void main()
{
    int matrizA[2][2];
    int matrizB[2][2];
    int matrizD[2][2];

    printf("Digite os elementos da Matriz A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da Matriz B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizD[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    printf("Matriz A - B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrizD[i][j]);
        }
    }
}
