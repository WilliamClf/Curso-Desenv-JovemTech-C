#include <stdio.h>
// 29. Construa um programa que receba o valor e o código de várias mercadorias vendidas em
// um determinado dia. Os códigos obedecem a lista a seguir:
// L-limpeza
// A-Alimentação
// H-Higiene
// Calcule e imprima:
/// • o total vendido naquele dia, com todos os códigos juntos;
// • o total vendido naquele dia em cada um dos códigos.
// Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero.

void main()
{
    char codigo;
    float valor;
    float totalG = 0;
    float totalLimp = 0;
    float totalAlim = 0;
    float totalHig = 0;

    printf("Digite o valor e o código da mercadoria (L/A/H) ou 0 para encerrar:\n");

    printf("Valor: ");
    scanf("%f", &valor);

    printf("Código (L/A/H): ");
    scanf(" %c", &codigo);

    totalG += valor;

    switch (codigo)
    {
    case 'L':
    case 'l':
        totalLimp += valor;
        break;
    case 'A':
    case 'a':
        totalAlim += valor;
        break;
    case 'H':
    case 'h':
        totalHig += valor;
        break;
    default:
        printf("Código inválido. Tente novamente.\n");
    }

    printf("Total vendido no dia: R$%.2f\n", totalG);
    printf("Total vendido em Limpeza: R$%.2f\n", totalLimp);
    printf("Total vendido em Alimentação: R$%.2f\n", totalAlim);
    printf("Total vendido em Higiene: R$%.2f\n", totalHig);
}
