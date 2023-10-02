#include <stdio.h>
// 4. Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade
// e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta
// mais alto e do mais velho.

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
    struct atleta mais_velha;
    struct atleta mais_alta;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do atleta: ");
        scanf("%[^\n]%*c", &atleta[i].nome);
        scanf("%*c");

        printf("Digite o esporte do atleta: ");
        scanf("%[^\n]%*c", &atleta[i].esporte);
        scanf("%*c");

        printf("Digite a idade do atleta: ");
        scanf("%d", &atleta[i].idade);
        scanf("%*c");

        printf("Digite a altura do atleta: ");
        scanf("%f", &atleta[i].altura);
        scanf("%*c");
    }

    mais_velha = atleta[0];
    mais_alta = atleta[0];

    for (int i = 1; i < 5; i++)
    {
        if (atleta[i].idade > mais_velha.idade)
        {
            mais_velha = atleta[i];
        }
        if (atleta[i].altura > mais_alta.altura)
        {
            mais_alta = atleta[i];
        }
    }

    printf("\nPessoa mais velha:\n");
    printf("Nome: %s\n", mais_velha.nome);
    printf("Idade: %d\n", mais_velha.idade);

    printf("\nPessoa mais alta:\n");
    printf("Nome: %s\n", mais_alta.nome);
    printf("Altura: %.2f\n", mais_alta.altura);
}