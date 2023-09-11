#include <stdio.h>
// 11. Entrar com valores para uma matriz C 2 x 3. Gerar e imprimir a C t. A matriz transposta é gerada trocando linha por
// coluna.
void main()
{
    int matrizC[2][3];
    int matrizT[3][2];

    printf("Digite os elementos da Matriz C:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrizC[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizT[j][i] = matrizC[i][j];
        }
    }

    printf("Matriz Transposta C:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrizT[i][j]);
        }
    }
}