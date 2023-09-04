#include <stdio.h>
// 1. Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita que o usuário
// digite um número inteiro para ser buscado no vetor, se for encontrado o programa deve imprimir a posição
// desse número no vetor, caso contrário, deve imprimir a mensagem: "Não encontrado!".

void main()
{
    int num[2];
    int numBuscado;
    int encontrado = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &num[i]);
        scanf("%*c");
    }

    printf("Digite um número inteiro para ser buscado no vetor: ");
    scanf("%d", &numBuscado);

    for (int i = 0; i < 3; i++)
    {
        if (num[i] == numBuscado)
        {
            printf("Voce achou o número %d na posiçao %d\n", numBuscado, num[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Nao foi encontrado!");
    }
}
