#include <stdio.h>
// 4. Faça um programa que armazene 8 números em um vetor e imprima todos os números. Ao final, imprima
// o total de números múltiplos de seis.
void main()
{
    int num[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        if (num[i] % 6 == 0)
        {
            printf("%d é multiplo de 6!\n", num[i]);
        }
    }
}