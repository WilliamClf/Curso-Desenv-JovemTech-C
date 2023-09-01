#include <stdio.h>
// 11. Construa um programa em C que leia vários números e informe quantos números
// entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo
// deverá cessar sua execução.

void main()
{
    int num;
    int contador = 0;

    do
    {
        printf("Insira um número: inteiro: ");
        scanf("%d", &num);

        if (num >= 100 && num <= 200)
        {
            contador++;
        }
        printf("Digite 0 caso queira finalizar!\n");
    } while (num != 0);

    printf("A quatidade de numeros entre 100 e 200 foi: %d", contador);
}