#include <stdio.h>

// 2) Crie uma função que receba por parâmetro um vetor de números inteiros
//  e os endereços de duas variáveis inteiras (que podemos chamar de min e max).
//  Ao passar essas variáveis para a função seu programa deverá analisar qual é
//  o maior e o menor elemento do vetor e depositar esses elementos nas
// variáveis do parâmetro. É claro que para testar tudo isso você vai precisar
//  criar uma função main que consuma a função que você definiu.

// Use o seguinte protótipo para sua função:

// void maiorMenor(int vetor[], int* maximo, int* minimo);

void maiorMenor(int vetor[], int *maximo, int *minimo)
{
    *maximo = *minimo = vetor[0];

    for (int i = 1; i < sizeof(vetor); i++)
    {
        if (vetor[i] > *maximo)
        {
            *maximo = vetor[i];
        }
        else if (vetor[i] < *minimo)
        {
            *minimo = vetor[i];
        }
    }
}

int main()
{
    int vetor[] = {10, 2, 1, 22, 12, 21, 7};
    int maximo, minimo;

    maiorMenor(vetor, &maximo, &minimo);

    printf("Maior elemento: %d\n", maximo);
    printf("Menor elemento: %d\n", minimo);
}
