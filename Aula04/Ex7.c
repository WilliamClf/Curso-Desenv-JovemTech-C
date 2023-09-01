#include <stdio.h>
#include <stdlib.h>
// 7. Crie um programa em linguagem C que permita entrar com o nome, a nota da
// prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
// nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
// imprimir a média geral da turma.

void main()
{

    char nome[100];
    float nota1;
    float nota2;
    float media, mediaGeral;

    for (int i = 1; i <= 15; i++)
    {
        printf("Insira seu nome: ");
        scanf("%[^\n]%*c", &nome);
        scanf("%*[^\n]");
        scanf("%*c");

        printf("Insira a nota da primeira prova: ");
        scanf("%f", &nota1);
        scanf("%*[^\n]");
        scanf("%c");

        printf("Insira a nota da segunda prova: ");
        scanf("%f", &nota2);
        scanf("%*[^\n]");
        scanf("%c");

        media = (nota1 + nota2) / 2;

        mediaGeral += media;

        printf("A média do aluno %s é: %f\n", nome, media);
    }

    float totalMg = mediaGeral / 15;

    printf("\n");
    printf("A média geral da turma é: %f", totalMg);
}