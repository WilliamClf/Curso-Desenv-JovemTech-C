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
    int vis1[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int vis2[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
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

    printf("\n*****************InserctionIdeia1*****************\n");

    for (int i = 1; i < n; i++)
    {
        aux = vis1[i];
        int j = i - 1;

        while (j >= 0 && aux < vis1[j])
        {
            vis1[j + 1] = vis1[j];
            j--;
        }

        vis1[j + 1] = aux;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vis1[i]);
    }

    printf("\n*****************InserctionIdeia2*****************\n");

    for (int i = 2; i < n; i++)
    {
        aux = vis2[i];
        int j = i - 1;

        while (j >= 0 && aux < vis2[j])
        {
            vis2[j + 1] = vis2[j];
            j--;
        }
        vis2[j + 1] = aux;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vis2[i]);
    }
}