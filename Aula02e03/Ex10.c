#include <stdio.h>

// 10. Faça um programa em C que leia o nome o endereço e o telefone de um cliente e ao final, imprima esses dados.
int main()
{

    char nome[100];
    char endereco[100];
    char telefone[100];

    printf("Insira seu nome: ");
    scanf("%[^\n]%*c", nome);

    printf("Insira seu endereço: ");
    scanf("%[^\n]%*c", endereco);

    printf("Insira seu telefone: ");
    scanf("%[^\n]%*c", telefone);

    printf("Dados do Cliente:\n");
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Telefone: %s\n", telefone);

    return 0;
}