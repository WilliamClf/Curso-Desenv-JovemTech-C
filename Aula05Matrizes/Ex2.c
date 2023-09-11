#include <stdio.h>
// 2. Faça um programa que leia os elementos de uma matriz do tipo inteiro com tamanho 3 X 3 e imprima os elementos
// multiplicando por 2.

void main()
{

    int matriz[3][3];
    int matrizM[3][3];

    printf("Digite os elementos da Matriz: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
            scanf("%*c");
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizM[i][j] = matriz[i][j] * 2;
        }

        printf("Elementos da matriz:\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d\n", matrizM[i][j]);
            }
        }
    }
}
