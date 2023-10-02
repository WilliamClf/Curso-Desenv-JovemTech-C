#include <stdio.h>
// 14. Faça um programa que verifique quantas vezes um número é divisível por outro. A função deve receber dois
// parâmetros, o dividendo e o divisor. Ao ler o divisor, é importante verificar se ele é menor que o dividendo. Ao
// final imprima o resultado.

int contarDivisoes(int dividendo, int divisor)
{
    int contador = 0;

    if (divisor >= dividendo)
    {
        printf("O divisor deve ser menor que o dividendo.\n");
        return -1;
    }

    while (dividendo >= divisor)
    {
        dividendo -= divisor;
        contador++;
    }

    return contador;
}

void main()
{
    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    int resultado = contarDivisoes(dividendo, divisor);

    if (resultado != -1)
    {
        printf("O dividendo é divisível pelo divisor %d vezes.\n", resultado);
    }
}