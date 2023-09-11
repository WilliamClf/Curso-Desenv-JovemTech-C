#include <stdio.h>
#include <stdlib.h>
// 1 - Dada a sequência de números: 3 4 9 2 5 8 2 1 7 4 6 2 9 8 5 1, ordene-a em ordem crescente segundo os
// seguintes algoritmos:
// - selection sort (seleção).
// - bubblesort (troca).
// - as duas versões do insertion sort (inserção).

void main()
{
    int vs[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int vbs[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int vis[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int min, i, j, aux;
    int n = 16;

    printf("*****************Selection*****************\n");

    for (i = 0; i < (n - 1); i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {

            if (vs[j] < vs[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            aux = vs[i];
            vs[i] = vs[min];
            vs[min] = aux;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", vs[i]);
    }

    printf("\n*****************BubbleSort*****************\n");

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (vbs[j] > vbs[j + 1])
            {

                int aux = vbs[j];
                vbs[j] = vbs[j + 1];
                vbs[j + 1] = aux;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", vbs[i]);
    }

    printf("\n*****************Inserction*****************\n");

    
}