#include <stdio.h>
// 7. Considere um vetor de 10 elementos, contendo valores inteiros. Faça um programa que leia os valores
// para preencher esse vetor, após a leitura o programa deve invocar uma função que calcule e devolva as
// frequências absoluta e relativa desses valores no conjunto. (Observação: a frequência absoluta de um valor
// é o número de vezes que esse valor aparece no conjunto de dados; a frequência
// relativa é a frequência absoluta dividida pelo número total de dados.). Utilize outros dois vetores para
// armazenar as frequências relativas e absolutas e ao final do programa, imprima de forma tabulada os
// números e suas frequências absoluta e relativa.

void calcularFrequencias(int vetor[], int tamanho, int frequenciaAbsoluta[], float frequenciaRelativa[])
{
    for (int i = 0; i < tamanho; i++)
    {
        frequenciaAbsoluta[i] = 0;
        frequenciaRelativa[i] = 0.0;
    }

    for (int i = 0; i < tamanho; i++)
    {
        int valor = vetor[i];
        frequenciaAbsoluta[valor]++;
    }

    for (int i = 0; i < tamanho; i++)
    {
        frequenciaRelativa[i] = (float)frequenciaAbsoluta[i] / tamanho;
    }
}

int main()
{
    int vetor[10];
    int frequenciaAbsoluta[10];
    float frequenciaRelativa[10];

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    calcularFrequencias(vetor, 10, frequenciaAbsoluta, frequenciaRelativa);

    printf("Número\tFrequência Absoluta\tFrequência Relativa\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t%d\t\t\t%.2f\n", i, frequenciaAbsoluta[i], frequenciaRelativa[i]);
    }

    return 0;
}