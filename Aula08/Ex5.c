#include <stdio.h>
// 5. Faça um programa que verifique se um número é primo por meio de uma função. Ao final imprima o
// resultado.

int verificarPrimo(int numero)
{
    int auxiliar, divisor = 0;

    for (auxiliar = 1; auxiliar <= numero; auxiliar++)
    {
        if (numero % auxiliar == 0)
        {
            divisor++;
        }
    }

    return divisor;
}

void main()
{

    int num, div;

    printf("Informe um número: ");
    scanf("%d", &num);

    div = verificarPrimo(num);

    if (div == 2)
    {
        printf("É primo!");
    }
    else
    {
        printf("Não é primo!");
    }
}