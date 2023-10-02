#include <stdio.h>
// 1. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior
// endereço.

void main()
{
    int n2 = 8, n1 = 10;

    if (&n1 > &n2)
    {
        printf("primeiro tem o endereço maior : %x", &n1);
    }
    else
    {
        printf("segundo tem o endereço maior : %x", &n1);
    }
}