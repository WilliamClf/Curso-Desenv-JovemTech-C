#include <stdio.h>
// 19. Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas de uma loja, em cada
// linha represente um mês do ano, e cada coluna, uma semana do mês. Calcule e imprima:
// • total vendido em cada mês do ano;
// • total vendido em cada semana durante todo o ano;
// • total vendido no ano.

void main()
{
    int vendas[12][4];
    int totalMes[12];
    int totalSemana[4];
    int totalAno = 0;

    printf("Digite os valores das vendas da loja:\n");
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &vendas[i][j]);
            totalMes[i] += vendas[i][j];
            totalSemana[j] += vendas[i][j];
            totalAno += vendas[i][j];
        }
    }

    printf("\nTotal vendido em cada mês do ano:\n");
    for (int i = 0; i < 12; i++)
    {
        printf("Mês %d: %d\n", i + 1, totalMes[i]);
    }

    printf("\nTotal vendido em cada semana durante todo o ano:\n");
    for (int j = 0; j < 4; j++)
    {
        printf("Semana %d: %d\n", j + 1, totalSemana[j]);
    }

    printf("\nTotal vendido no ano: %d\n", totalAno);
}