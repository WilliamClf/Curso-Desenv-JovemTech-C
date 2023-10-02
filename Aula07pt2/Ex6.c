#include <stdio.h>
// 6. Escreva um programa que contenha uma estrutura representando uma data válida. Essa estrutura deve
// conter os campos dia, mês e ano. Em seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o
// número de dias que decorrem entre as duas datas.

struct data
{
    int dia;
    int mes;
    int ano;
};

void main()
{
    struct data data[2];
    int diferAnos;
    int diferMes;
    int diferDias;
    int totalDias;

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o dia: ");
        scanf("%d", &data[i].dia);
        scanf("%*c");
        printf("Digite o número do mes: ");
        scanf("%d", &data[i].mes);
        scanf("%*c");
        printf("Digite o ano: ");
        scanf("%d", &data[i].ano);
        scanf("%*c");
    }

    if (data[0].ano > data[1].ano)
    {
        diferAnos = data[0].ano - data[1].ano;
    }
    else
    {
        diferAnos = data[1].ano - data[0].ano;
    }

    if (data[0].mes > data[1].mes)
    {
        diferMes = data[0].mes - data[1].mes;
    }
    else
    {
        diferMes = data[1].mes - data[0].mes;
    }

    if (data[0].dia > data[1].dia)
    {
        diferDias = data[0].dia - data[1].dia;
    }
    else
    {
        diferDias = data[1].dia - data[0].dia;
    }

    totalDias = (diferAnos * 365) + (diferMes * 30) + diferDias;

    printf("A quantidade de dias entre as datas é: %d", totalDias);
}