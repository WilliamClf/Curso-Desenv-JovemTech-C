#include <stdio.h>
// 6. Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma matriz B[2][2]. Gerar e imprimir a matriz
// SOMA[2][2].
void main()
{
    int matrizA[2][2];
    int matrizB[2][2];
    int matrizS[2][2];

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
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz A + B:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrizS[i][j]);
        }
    }
}