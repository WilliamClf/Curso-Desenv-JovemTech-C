#include <stdio.h>
#include <stdio.h>
// 3. Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.

void main()
{
    for (int i = 1; i <= 500; i++)
    {

        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
}