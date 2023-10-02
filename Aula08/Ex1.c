#include <stdio.h>
// 1. Faça um programa em C que leia três números e, para cada um, imprimir o dobro. O cálculo deverá ser
// realizado por uma função e o resultado impresso ao final do programa.

int dobroNum(int parametroNum)
{
    int dobro = parametroNum * 2;
    return dobro;
}

void main()
{

    int num1, num2, num3;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um número: ");
    scanf("%d", &num2);

    printf("Digite um número: ");
    scanf("%d", &num3);

    printf("Dobro do número %d: %d\n", num1, dobroNum(num1));
    printf("Dobro do número %d: %d\n", num2, dobroNum(num2));
    printf("Dobro do número %d: %d\n", num3, dobroNum(num3));
}