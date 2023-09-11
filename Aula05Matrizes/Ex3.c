#include <stdio.h>
// 3. Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e imprima: Todos os elementos que se
// encontram em posições cuja linha mais coluna formam um número par.

void main()
{

    int matriz[5][5];

    printf("Digite os elementos da Matriz: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da matriz:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("%d ", matriz[i][j]);
            }
        }
    }
}