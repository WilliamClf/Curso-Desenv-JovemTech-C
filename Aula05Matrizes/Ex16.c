#include <stdio.h>
// 16. Faça um programa em C que possa armazenar as alturas de dez atletas de cinco
// delegações que participarão dos jogos de verão. Imprimir a maior altura de cada
// delegação.

void main()
{
    int matriz[5][10];
    int maior[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Time %d, Insira as alturas dos atletas:\n", i + 1);
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        maior[i] = matriz[i][0];
        for (int j = 1; j < 10; j++)
        {
            if (matriz[i][j] > maior[i])
            {
                maior[i] = matriz[i][j];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Atleta do time %d, Altura: %d\n", i + 1, maior[i]);
    }
}