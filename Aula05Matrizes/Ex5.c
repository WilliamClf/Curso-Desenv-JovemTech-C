#include <stdio.h>
// 5. Faça um programa que permita entrar com valores em uma matriz A de tamanho 3 X 4. Gerar e imprimir uma matriz
// B que é o triplo da matriz A.

void main()
{
    int matrizA[3][4];
    int matrizB[3][4];

    printf("Digite os elementos da Matriz A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrizB[i][j] = matrizA[i][j] * 3;
        }
    }

    printf("Matriz B: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrizB[i][j]);
        }
    }
}