#include <stdio.h>
// 11. Construa um programa que leia dados para um vetor de 100 elementos inteiros. Imprimir o maior e o
// menor, sem ordenar, o percentual de números pares e a média dos elementos do vetor.

void main()
{
    int vetor[100];
    int maior, menor, soma = 0, numPares = 0;
    float percentPares, media;

    printf("Insira 100 elementos inteiros:\n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &vetor[i]);

        if (i == 0)
        {
            maior = vetor[i];
            menor = vetor[i];
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else if (vetor[i] < menor)
        {
            menor = vetor[i];
        }

        if (vetor[i] % 2 == 0)
        {
            numPares++;
        }

        soma += vetor[i];
    }

    percentPares = (float)(numPares * 100) / 100;

    media = (float)soma / 100;

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    printf("Percentual de números pares: %.2f%%\n", percentPares);
    printf("Média dos elementos: %.2f\n", media);
}