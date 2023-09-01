#include <stdio.h>
#include <stdlib.h>
// 15. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado,
// o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o
// professor tem dez dias para devolver o livro e o aluno só três dias.
// • Nome do livro:
// • Tipo de usuário:
// • Total de dias:

void main()
{
    char nomelivro[100];
    int tipoUser;

    printf("Insira o nome do livro: ");
    scanf("%[^\n]%*c", &nomelivro);

    printf("Voce é: 1- Aluno ou 2- Professor:");
    scanf("%d", &tipoUser);

    printf("**************Recibo***************\n");
    printf("Nome do Livro: %s\n", nomelivro);

    if (tipoUser == 1)
    {
        printf("Aluno.\n");
        printf("3 dias para devolver o livro.\n");
    }
    else if (tipoUser == 2)
    {
        printf("Professor.\n");
        printf("10 dias para devolver o livro.\n");
    }

    printf("************************************");
}