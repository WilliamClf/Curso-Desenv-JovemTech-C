#include <stdio.h>
#include <stdlib.h>

// 1. Implemente um programa em C que leia o nome, a idade e o endereço de uma pessoa e armazene esses
// dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.

struct pessoa
{
    char nome[20];
    int idade;
    char end[100];
};

void main()
{

    struct pessoa p1;
    printf("Insira os dados da pessoa. \n");
    printf("Digite seu primeiro nome: ");
    scanf("%[^\n]%*c", &p1.nome);
    scanf("%*c");

    printf("Digite sua idade: ");
    scanf("%d", &p1.idade);
    scanf("%*c");

    printf("Digite seu endereço: ");
    scanf("%[^\n]%*c", &p1.end);
    scanf("%*c");

    printf("\n%s\n", p1.nome);
    printf("\n%d\n", p1.idade);
    printf("\n%s\n", p1.end);
}