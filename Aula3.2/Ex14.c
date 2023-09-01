#include <stdio.h>
#include <stdlib.h>
// 14.Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário
// digite um número fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com
// este número. Utilize o switch para este problema.
void main()
{
    int num;

    printf("Insira um número do mês:");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Janeiro");
        break;

    case 2:
        printf("Feveiro");
        break;

    case 3:
        printf("Março");
        break;

    case 4:
        printf("Abril");
        break;

    case 5:
        printf("Maio");
        break;

    case 6:
        printf("Junho");
        break;

    case 7:
        printf("Julho");
        break;

    case 8:
        printf("Agosto");
        break;

    case 9:
        printf("Setembro");
        break;

    case 10:
        printf("Outubro");
        break;

    case 11:
        printf("Novembro");
        break;

    case 12:
        printf("Dezembro");
        break;

    default:
        printf("Número do mes invalido!");
        break;
    }
}