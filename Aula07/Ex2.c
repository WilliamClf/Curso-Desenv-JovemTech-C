#include <stdio.h>
// 2. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de
// matrícula do aluno, seu nome e as notas de três provas. Defina também um tipo para esta estrutura. Agora,
// escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o
// nome e as notas do aluno que possui a maior média geral dentre os cinco.

struct aluno
{
    int numMatricula;
    char nome[80];
    float nota1, nota2, nota3, media;
};

typedef struct aluno Aluno;

void main()
{
    int maiorMedia;
    Aluno al[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Insira os dados do Aluno %d. \n", i + 1);
        printf("Digite o numero da matricula: ");
        scanf("%d", &al[i].numMatricula);
        scanf("%*c");

        printf("Digite seu nome completo: ");
        scanf("%[^\n]%*c", &al[i].nome);
        scanf("%*c");

        printf("Digite a nota da prova 1 : ");
        scanf("%f", &al[i].nota1);
        scanf("%*c");

        printf("Digite a nota da prova 2 : ");
        scanf("%f", &al[i].nota2);
        scanf("%*c");

        printf("Digite a nota da prova 3 : ");
        scanf("%f", &al[i].nota3);
        scanf("%*c");

        al[i].media = (al[i].nota1 + al[i].nota2 + al[i].nota3) / 3;
    }

    maiorMedia = al[1].media;

    if (al[2].media > maiorMedia)
    {
        al[2].media = maiorMedia;
        printf("\nNome: %s\n", al[2].nome);
        printf("\nNota1: %f\n", al[2].nota1);
        printf("\nNota2: %f\n", al[2].nota2);
        printf("\nNota3: %f\n", al[2].nota3);
    }

    else if (al[3].media > maiorMedia)
    {
        al[3].media = maiorMedia;
        printf("\nNome: %s\n", al[3].nome);
        printf("\nNota1: %f\n", al[3].nota1);
        printf("\nNota2: %f\n", al[3].nota2);
        printf("\nNota: %f\n", al[3].nota3);
    }

    else if (al[4].media > maiorMedia)
    {
        al[4].media = maiorMedia;
        printf("\nNome: %s\n", al[4].nome);
        printf("\nNota1: %f\n", al[4].nota1);
        printf("\nNota2: %f\n", al[4].nota2);
        printf("\nNota3: %f\n", al[4].nota3);
    }

    else if (al[5].media > maiorMedia)
    {
        al[5].media = maiorMedia;
        printf("\nNome: %s\n", al[5].nome);
        printf("\nNota1: %f\n", al[5].nota1);
        printf("\nNota2: %f\n", al[5].nota2);
        printf("\nNota3: %f\n", al[5].nota3);
    }
    else
    {
        printf("\nNome: %s\n", al[1].nome);
        printf("\nNota1: %f\n", al[1].nota1);
        printf("\nNota2: %f\n", al[1].nota2);
        printf("\nNota3: %f\n", al[1].nota3);
    }
}