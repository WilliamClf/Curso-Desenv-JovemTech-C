#include <stdio.h>
// 5. Usando a estrutura "atleta"do exercício anterior, escreva um programa que leia os dados de cinco atletas e
// os exiba por ordem de idade, do mais velho para o mais novo.

struct atleta
{
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
};

void main()
{

    struct atleta atleta[5];
    int maior;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do atleta: ");
        scanf("%[^\n]%*c", &atleta[i].nome);
        scanf("%*c");

        printf("Digite a idade do atleta: ");
        scanf("%d", &atleta[i].idade);
        scanf("%*c");
    }

    maior = atleta[1].idade;

    if (atleta[2].idade > maior)
    {
        atleta[2].idade = maior;
        printf("\nNome: %s\n", atleta[2].nome);
        printf("\nIdade: %d\n", atleta[2].idade);
    }

    else if (atleta[3].idade > maior)
    {
        atleta[3].idade = maior;
        printf("\nNome: %s\n", atleta[3].nome);
        printf("\nIdade: %d\n", atleta[3].idade);
    }
    else if (atleta[4].idade > maior)
    {
        atleta[4].idade = maior;
        printf("\nNome: %s\n", atleta[4].nome);
        printf("\nIdade: %d\n", atleta[4].idade);
    }
    else if (atleta[5].idade > maior)
    {
        atleta[5].idade = maior;
        printf("\nNome: %s\n", atleta[5].nome);
        printf("\nIdade: %d\n", atleta[5].idade);
    }
}