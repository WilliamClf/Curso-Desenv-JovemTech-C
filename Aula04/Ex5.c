#include <stdio.h>
#include <stdlib.h>
// 5. Faça um programa em C que imprima todos os valores pares entre 1 e 20.

void main()
{

    for (int i = 1; i <= 20; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}