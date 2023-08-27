#include <stdio.h>
// 1. Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição, caso o
// resultado seja maior que 10, apresentá-lo.

void main()
{
    int num1, num2, adicao;

    printf("Insira um número inteiro: ");
    scanf("%d", &num1);

    printf("Insira outro número inteiro: ");
    scanf("%d", &num2);

    adicao = num1 + num2;

    if (adicao > 10)
    {
        printf("O resultado é %d", adicao);
    }
}