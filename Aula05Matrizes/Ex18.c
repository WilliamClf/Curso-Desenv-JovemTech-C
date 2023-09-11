#include <stdio.h>
// 18. Faça um programa que leia uma matriz 5 X 5 inteira e apresente uma determinada linha da matriz,
// solicitada via teclado.
void main()
{

    int matriz[5][5];
    int linha;

    printf("Digite os elementos da matriz :\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o número da linha que deseja apresentar: ");
    scanf("%d", &linha);

    if (linha >= 1 && linha <= 5)
    {
        printf("Linha %d da matriz:\n", linha);
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[linha - 1][j]);
        }
    }
    else
    {
        printf("Número de linha inválido.\n");
    }
}