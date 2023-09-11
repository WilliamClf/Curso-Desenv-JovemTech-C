#include <stdio.h>
// 1. Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com tamanho 10 X 10. Ao final, imprima
// todos os elementos.

void main()
{
    int matriz[10][10];

    printf("Digite os elementos da Matriz: ");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &matriz[i][j]);
            scanf("%*c");
        }
    }

    printf("Elementos da matriz:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\n", matriz[i][j]);
        }
    }
}