#include <stdio.h>
#include <stdlib.h>
// 11. Faça um programa que leia 3 números e imprima o maior deles.

void main()
{
    float num1, num2, num3, maior;

    printf("Insira o primeiro número: ");
    scanf("%f", &num1);

    printf("Insira o segundo número: ");
    scanf("%f", &num2);

    printf("Insira o terceiro número: ");
    scanf("%f", &num3);

    maior = num1;

    if (num2 > maior)
    {
        maior = num2;
    }

    if (num3 > maior)
    {
        maior = num3;
    }

    printf("O maior número é o %f", maior);
}