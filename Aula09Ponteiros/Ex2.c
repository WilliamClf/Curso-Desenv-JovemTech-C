#include <stdio.h>
// 2. Crie um programa que leia números reais emum vetor de tamanho 10. Imprima o endereço de cada
// posição desse vetor.

void main()
{
    float vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número real: ");
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Enderço da posição %d: %x\n", i + 1, &vetor[i]);
    }
}