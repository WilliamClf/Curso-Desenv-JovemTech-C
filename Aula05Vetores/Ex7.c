#include <stdio.h>
// 7. Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize vetores). Ao
// final, o programa deverá imprimir quantas mercadorias proporcionam:
// • lucro < 10%
// • 10% <= lucro <= 20%
// • lucro > 20%
void main()
{
    double precoCompra[5];
    double precoVenda[5];
    double porcentlucro[5];
    int lucroMenor10 = 0;
    int lucroEntre10e20 = 0;
    int lucroMaior20 = 0;

    for (int i = 0; i < 100; i++)
    {
        printf("Insira o preco de compra da mercadoria: ");
        scanf("%lf", &precoCompra[i]);
        scanf("%*c");

        printf("Insira o preco de venda da mercadoria: ");
        scanf("%lf", &precoVenda[i]);
        scanf("%*c");

        porcentlucro[i] = ((precoVenda[i] - precoCompra[i]) / precoCompra[i]) * 100;

        if (porcentlucro[i] < 10)
        {
            lucroMenor10++;
        }
        else if (porcentlucro[i] >= 10 && porcentlucro[i] <= 20)
        {
            lucroEntre10e20++;
        }
        else if (porcentlucro[i] > 20)
        {
            lucroMaior20++;
        }
    }

    printf("Resumo lucros:\n");
    printf("Lucro menor que 10 porcento: %d\n", lucroMenor10);
    printf("Lucro entre 10 e 20 porcento: %d\n", lucroEntre10e20);
    printf("Lucro maior que 20 porcento: %d\n", lucroMaior20);
}