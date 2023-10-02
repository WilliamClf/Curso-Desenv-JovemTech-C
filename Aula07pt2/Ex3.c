#include <stdio.h>
// 3. Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. Faça uso de
// estruturas aninhadas e definição de novo tipo de dado. Agora, escreva um programa que leia os dados de seis
// pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.

struct pessoa
{
    char nome[20];
    int data;
};

void main()
{
    struct pessoa p[6], mN[0], mV[0];
    int idade[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite seu primeiro nome: ");
        scanf("%[^\n]%*c", &p[i].nome);
        scanf("%*c");

        printf("Digite o ano que voce nasceu: ");
        scanf("%d", &p[i].data);
        scanf("%*c");
        idade[i] = 2023 - p[i].data;
    }

    mV[0].data = idade[1];

    if (idade[2] > mV[0].data)
    {
        idade[2] = mV[0].data;
        printf("\nPessoa mais velha:\n");
        printf("Nome: %s", p[2].nome);
    }

    else if (idade[3] > mV[0].data)
    {
        idade[3] = mV[0].data;
        printf("\nPessoa mais velha:\n");
        printf("Nome: %s", p[3].nome);
    }

    else if (idade[4] > mV[0].data)
    {
        idade[4] = mV[0].data;
        printf("\nPessoa mais velha:\n");
        printf("Nome: %s", p[4].nome);
    }

    else if (idade[5] > mV[0].data)
    {
        idade[5] = mV[0].data;
        printf("\nPessoa mais velha:\n");
        printf("Nome: %s", p[5].nome);
    }
    else
    {
        printf("\nPessoa mais velha:\n");
        printf("Nome: %s", p[1].nome);
    }

    mN[0].data = idade[1];

    if (idade[2] < mN[0].data)
    {
        idade[2] = mN[0].data;
        printf("\nPessoa mais nova:\n");
        printf("Nome: %s", p[2].nome);
    }

    else if (idade[3] < mN[0].data)
    {
        idade[3] = mN[0].data;
        printf("\nPessoa mais nova:\n");
        printf("Nome: %s", p[3].nome);
    }

    else if (idade[4] < mN[0].data)
    {
        idade[4] = mN[0].data;
        printf("\nPessoa mais nova:\n");
        printf("Nome: %s", p[4].nome);
    }

    else if (idade[5] < mN[0].data)
    {
        idade[5] = mN[0].data;
        printf("\nPessoa mais nova:\n");
        printf("Nome: %s", p[5].nome);
    }
    else
    {
        printf("\nPessoa mais nova:\n");
        printf("Nome: %s", p[1].nome);
    }
}