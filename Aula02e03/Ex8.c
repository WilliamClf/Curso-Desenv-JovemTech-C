#include <stdio.h>
// 8. Faça um programa em C que leia dois números inteiros e imprima a subtração deles.
int main(void)
{
    int num1, num2;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Insira outro número real: ");
    scanf("%d", &num2);

    int contaSub = num1 - num2;

    printf("O resultado da Subtração entre %d e %d é: %d", num1, num2, contaSub);
}