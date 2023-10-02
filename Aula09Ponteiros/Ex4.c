#include <stdio.h>
// 4. Elabore um programa que leia um valor do tipo inteiro e, por meio de função, atualize todas as posições de
// um vetor com o número inteiro lido, depois imprima os valores. Utilize ponteiros para as operações.

int trocaVetor(int num)
{
    int vetor[num];
    int *pnum = vetor;

    for (int i = 0; i < num; i++)
    {
        pnum + i;
    }
    return vetor;
}

void main()
{
    int num;
    int vetor[num];

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    vetor[num] = trocaVetor(num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", vetor[i]);
    }
}