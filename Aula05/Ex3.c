#include <stdio.h>
// 3. Construa uma programa em C que armazene 15 números em um vetor e imprima uma listagem numerada
// contendo o número e uma das mensagens: par ou ímpar.

void main()
{
    int num[15];

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d é par!\n", num[i]);
        }
        else
        {
            printf("%d é impar!\n", num[i]);
        }
    }
}