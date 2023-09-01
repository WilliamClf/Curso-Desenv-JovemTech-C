#include <stdio.h>
#include <stdlib.h>
// 10. Faça um programa em C que leia três números inteiros e imprima os três em ordem crescente.
void main()
{
    int num1, num2, num3, maior, menor, meio;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    printf("Insira o terceiro número: ");
    scanf("%d", &num3);

    maior = menor = num1;

    if (num2 > maior)
    {
        maior = num2;
    }

    if (num3 > maior)
    {
        maior = num3;
    }

    if (num2 < menor)
    {
        menor = num2;
    }

    if (num3 < menor)
    {
        menor = num3;
    }

    if (num1 > menor && num1 < maior)
    {
        meio = num1;
    }

    if (num2 > menor && num2 < maior)
    {
        meio = num2;
    }

    if (num3 > menor && num3 < maior)
    {
        meio = num3;
    }

    printf("A ordem crescente dos números é: %d, %d, %d", menor, meio, maior);
}