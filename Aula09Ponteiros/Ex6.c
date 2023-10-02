#include <stdio.h>
// 6. Construa uma função que, recebendo como parâmetros quatro números inteiros, devolva ao módulo que
// o chamou os dois maiores números dentre os quatro recebidos. Faça umprograma que leia tantos conjuntos
// de quatro valores quantos o usuário deseje e que acione a função para cada conjunto de valores,
// apresentando a cada vez os dois maiores números. Se preferir, utilize vetor para armazenar o
// conjunto de valores.

void encontrarDoisMaiores(int a, int b, int c, int d, int *maior1, int *maior2)
{
    if (a >= b && a >= c && a >= d)
    {
        *maior1 = a;
        if (b >= c && b >= d)
        {
            *maior2 = b;
        }
        else if (c >= b && c >= d)
        {
            *maior2 = c;
        }
        else
        {
            *maior2 = d;
        }
    }
    else if (b >= a && b >= c && b >= d)
    {
        *maior1 = b;
        if (a >= c && a >= d)
        {
            *maior2 = a;
        }
        else if (c >= a && c >= d)
        {
            *maior2 = c;
        }
        else
        {
            *maior2 = d;
        }
    }
    else if (c >= a && c >= b && c >= d)
    {
        *maior1 = c;
        if (a >= b && a >= d)
        {
            *maior2 = a;
        }
        else if (b >= a && b >= d)
        {
            *maior2 = b;
        }
        else
        {
            *maior2 = d;
        }
    }
    else
    {
        *maior1 = d;
        if (a >= b && a >= c)
        {
            *maior2 = a;
        }
        else if (b >= a && b >= c)
        {
            *maior2 = b;
        }
        else
        {
            *maior2 = c;
        }
    }
}

int main()
{
    int conjunto[4];
    int maior1, maior2;
    char continuar;

    do
    {
        printf("Digite quatro números inteiros separados por espaços: ");
        scanf("%d %d %d %d", &conjunto[0], &conjunto[1], &conjunto[2], &conjunto[3]);

        encontrarDoisMaiores(conjunto[0], conjunto[1], conjunto[2], conjunto[3], &maior1, &maior2);

        printf("Os dois maiores números são: %d e %d\n", maior1, maior2);

        printf("Deseja continuar (S/N)? ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
}