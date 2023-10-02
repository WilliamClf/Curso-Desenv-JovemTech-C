#include <stdio.h>
// 4. Faça um programa que calcule e imprima o fatorial de um número, usando uma função que receba um valor
// e retorne o fatorial desse valor.

int calculoFatorial(int numero)
{

    int fatorial;
    for (fatorial = 1; numero > 1; numero = numero - 1)
    {
        fatorial = fatorial * numero;
    }
    return fatorial;
}

void main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Fatorial de %d: %d", num, calculoFatorial(num));
}