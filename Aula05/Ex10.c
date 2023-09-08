#include <stdio.h>
// 10. Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w cujos componentes são
// os fatoriais dos respectivos componentes de vet.

void main()
{
    int vet[10];
    int w[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira um elemento:");
        scanf("%d", &vet);
        scanf("%*c");

        for (w[i] = 1; vet[i] > 1; vet[i] = vet[i] - 1)
        {
            w[i] = w[i] * vet[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Fatorial de %d: %d", vet[i], w[i]);
    }
}