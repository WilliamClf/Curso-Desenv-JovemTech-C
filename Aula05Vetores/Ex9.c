#include <stdio.h>
// 9. Faça um programa em C que leia dois conjs de números inteiros, tendo cada um 10 elem. Ao
// final o programa deve listar os elementos comuns aos conjs.

void main()
{
    int conj1[10];
    int conj2[10];
    int elemComuns[10];
    int numElemComuns = 0;

    printf("Insira os 10 elementos do primeiro conjunto:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &conj1[i]);
    }

    printf("Insira os 10 elementos do segundo conjunto:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &conj2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (conj1[i] == conj2[j])
            {
                elemComuns[numElemComuns] = conj1[i];
                numElemComuns++;
            }
        }

        if (numElemComuns > 0)
        {
            printf("Elementos comuns aos dois conjutos:\n");
            for (int i = 0; i < numElemComuns; i++)
            {
                printf("%d ", elemComuns[i]);
            }
            printf("\n");
        }
        else
        {
            printf("Não há elementos comuns.\n");
        }
    }
}