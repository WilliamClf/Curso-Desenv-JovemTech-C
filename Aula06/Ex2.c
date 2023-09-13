#include <stdio.h>
#include <stdlib.h>
// 2- Faça uma comparação entre todos os métodos de ordenação implementados com relação a ordem de
// complexidade (levando em consideração a qntd de comparações e movimentações). Teste diferentes
// configurações de entrada (comparações com entradas de 10, 50 e 100 valores, dispostos de modo aleatório
// e ordenados de modo decrescente).
void main()
{
    int n = 100;
    int comparacoes = 0;
    int movimentacoes = 0;
    int lista[n];

    printf("*****************Selection*****************\n");

    printf("Lista Gerada:\n");
    for (int i = 0; i < n; i++)
    {
        lista[i] = rand() % 100;
        printf("%d ", lista[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            comparacoes++;
            if (lista[j] < lista[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            movimentacoes++;
            int temp = lista[i];
            lista[i] = lista[min];
            lista[min] = temp;
        }
    }

    printf("\nLista ordenada:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("\n");

    printf("Comparacoes: %d\n", comparacoes);
    printf("Movimentacoes: %d\n", movimentacoes);
}