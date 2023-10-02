#include <stdio.h>
// 3. Crie um programa que contenha umvetor de inteiros com tamanho 5. Utilizando apenas ponteiros, leia
// valores e armazene neste vetor e após isso, imprima o dobro de cada valor lido.

void main()
{
    int vetor[5];
    int *pvetor = vetor;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", pvetor + i);
    }

    for (int i = 0; i < 5; i++)
    {
        vetor[i] = vetor[i] * 2;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Dobro de cada número: %d\n", vetor[i]);
    }
}