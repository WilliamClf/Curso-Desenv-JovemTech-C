#include <stdio.h>
#include <stdlib.h>
// 16. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha
// do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.

void main()
{

    int prato, sobremesa, bebida, calorias;

    printf("Escolha seu almoço!\n");

    printf("Vegetariano-1\nPeixe-2\nFrango-3\nCarne-4\nInforme o prato principal:");
    scanf("%d", &prato);

    switch (prato)
    {
    case 1:
        prato = 180;
        break;

    case 2:
        prato = 230;
        break;

    case 3:
        prato = 250;
        break;

    case 4:
        prato = 350;
        break;

    default:
        printf("Prato Inválido!");
    }

    printf("Abacaxi-1\nSorvete diet-2\nMousse diet-3\nMousse chocolate-4\nInforme a sobremesa:");
    scanf("%d", &sobremesa);

    switch (sobremesa)
    {
    case 1:
        sobremesa = 75;
        break;

    case 2:
        sobremesa = 110;
        break;

    case 3:
        sobremesa = 170;
        break;

    case 4:
        sobremesa = 200;
        break;

    default:
        printf("Sobremesa Inválida!");
    }

    printf("Chá-1\nSuco de laranja-2\nSuco de melão-3\nRefrigerante diet-4\nInforme a bebida:");
    scanf("%d", &bebida);

    switch (bebida)
    {
    case 1:
        bebida = 20;
        break;

    case 2:
        bebida = 70;
        break;

    case 3:
        bebida = 100;
        break;

    case 4:
        bebida = 65;
        break;

    default:
        printf("Bebida Inválida!");
    }

    calorias = prato + sobremesa + bebida;

    printf("As calorias totais do almoço é: %d", calorias);
}