#include <stdio.h>
// 4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.

void main()
{
    int num;
    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("%d é divisível por 5!");
    }
    else
    {
        printf("%d não é divisível por 5!");
    }
}