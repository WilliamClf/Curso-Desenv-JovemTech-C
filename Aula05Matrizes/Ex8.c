#include <stdio.h>
// 8. Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a soma de todos os seus elementos.
void main()
{
    int matriz[4][5];
    int soma = 0;

    // Entrada dos elementos da matriz
    printf("Digite os elementos da Matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("Soma dos elementos da matriz: %d", soma);
}