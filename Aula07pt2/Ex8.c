#include <stdio.h>
// 8. Crie um programa que tenha uma estrutura para armazenar o nome, a idade e número da carteira de sócio
// de 50 associados de um clube. Crie também uma estrutura, dentro desta anterior, chamada dados que
// contenha o endereço, telefone e data de nascimento.

struct dados
{
    char endereco[50];
    int telefone;
    int dataNasc;
};

struct socio
{
    char nome[100];
    int idade;
    int numCarteira;
    struct dados dados
};

void main()
{
    struct socio socios[50];
    for (int i = 0; i < 50; i++)
    {
        printf("Digite o nome do associdado:");
        scanf("%[^\n]%*c", &socios[i].nome);
        printf("Digite a idade do associdado:");
        scanf("%d", &socios[i].idade);
        printf("Digite o número da carteira do associdado:");
        scanf("%d", &socios[i].numCarteira);
        printf("Digite o endereço do associdado:");
        scanf("%[^\n]%*c", &socios[i].dados.endereco);
        printf("Digite o telefone do associdado:");
        scanf("%d", &socios[i].dados.telefone);
        printf("Digite a data de nascimento do associdado(ano):");
        scanf("%d", &socios[i].dados.dataNasc);
    }
}
