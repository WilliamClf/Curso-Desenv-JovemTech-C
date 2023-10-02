#include <stdio.h>
// 9. Crie um programa com uma estrutura para simular uma agenda de telefone celular, com até 100 registros.
// Nessa agenda deve constar o nome, sobrenome, número de telefone móvel, número de telefone fixo e e-mail.
// O programa deverá fazer a leitura e, após isso, mostrar os dados na tela.

struct agenda
{
    char nome[20];
    char sobrenome[20];
    int numTelMovel;
    int numTelFixo;
    char email[40];
};

void main()
{
    struct agenda cadastro[100];

    for (int i = 0; i < 100; i++)
    {
        printf("Digite o nome:");
        scanf("%s", &cadastro[i].nome);
        printf("Digite o sobrenome:");
        scanf("%s", &cadastro[i].sobrenome);
        printf("Digite o telefone movel:");
        scanf("%d", &cadastro[i].numTelMovel);
        printf("Digite o telefone fixo:");
        scanf("%d", &cadastro[i].numTelFixo);
        printf("Digite o email:");
        scanf("%s", &cadastro[i].email);
    }

    printf("****************ListaRegistros****************\n");

    for (int i = 0; i < 2; i++)
    {
        printf("***********************************************\n");
        printf("*Nome: %s\n", cadastro[i].nome);
        printf("*Sobrenome: %s\n", cadastro[i].sobrenome);
        printf("*Número de telefone móvel: %d\n", cadastro[i].numTelMovel);
        printf("*Número de telefone fixo: %d\n", cadastro[i].numTelFixo);
        printf("*Email: %s\n", cadastro[i].email);
    }
}