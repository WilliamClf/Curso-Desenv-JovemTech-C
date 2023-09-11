#include <stdio.h>
// 3- Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo algoritmo da
// bolha.

void main()
{
    char string[9] = {'a', 'l', 'g', 'o', 'r', 'i', 't', 'm', 'o'};
    int n = 9;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (string[j] > string[j + 1])
            {

                int aux = string[j];
                string[j] = string[j + 1];
                string[j + 1] = aux;
            }
        }
    }
}