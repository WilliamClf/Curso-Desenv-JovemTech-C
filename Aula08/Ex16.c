#include <stdio.h>
#include <math.h>
// 16. Construa um programa que leia um valor inteiro e retorne se a raiz desse número é exata ou não. Escreva
// uma função para fazer a validação. Ao final imprima o resultado.

int isRaizExata(int numero)
{
    double raiz = sqrt(numero);

    if (raiz == (int)raiz)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("A raiz de um número negativo não é exata.\n");
    }
    else
    {
        int resultado = isRaizExata(numero);

        if (resultado)
        {
            printf("A raiz quadrada de %d é exata.\n", numero);
        }
        else
        {
            printf("A raiz quadrada de %d não é exata.\n", numero);
        }
    }

    return 0;
}