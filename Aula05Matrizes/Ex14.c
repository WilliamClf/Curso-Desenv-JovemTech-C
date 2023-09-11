#include <stdio.h>
// 14. Crie um programa que leia e armazene os elementos de uma matriz inteira com tamanho 5 X 5 e
// imprimi-la. Troque, a seguir:
// • a segunda linha pela quinta;
// • a terceira coluna pela quinta;
// • a diagonal principal pela diagonal secundária.
void main()
{
    int matriz[5][5];
    int vtemp[5];

    printf("Digite os elementos da matriz: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i > 5; i++)
        {
            scanf("%d", &matriz[i][j]);
            scanf("%*c");
        }
    }

    for (int j = 0; j < 5; j++)
    {
        vtemp[j] = matriz[1][j];
        matriz[1][j] = matriz[4][j];
        matriz[4][j] = vtemp[j];
    }

    for (int i = 0; i < 5; i++)
    {
        vtemp[i] = matriz[i][2];
        matriz[i][2] = matriz[i][4];
        matriz[i][4] = vtemp[i];
    }

    for (int i = 0; i < 5; i++)
    {
        vtemp[i] = matriz[i][i];
        matriz[i][i] = matriz[i][4 - i];
        matriz[i][4 - i] = vtemp[i];
    }

    printf("Nova matriz:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }
}