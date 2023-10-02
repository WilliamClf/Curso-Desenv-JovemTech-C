#include <stdio.h>
// 5. Faça um programa em C que leia um número e informe se ele é divisível por 3 e por 7.

void main()
{
    int num;
    printf("Insira um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("%d é divisível por 3 e por 7: ", num);
    }
    else
    {
        printf("%d não é divisível por 3 e por 7: ", num);
    }
}