#include <stdio.h>
// 5. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule e armazene a média
// arredondada. Armazene também a situação do aluno:
// 1-Aprovado ou 2-Reprovado.
// Ao final o programa deve imprimir uma listagem contendo as notas, a média e a situação de cada aluno em
// formato tabulado.
// Utilize quantos vetores forem necessários para armazenar os dados.
void main()
{

    float nota1[15], nota2[15];
    float media[15];
    int guardarStats[15];

    for (int i = 0; i < 15; i++)
    {
        printf("\nInsira a nota da primeira prova: ");
        scanf("%f", &nota1[i]);
        scanf("%*c");

        printf("Insira a nota da primeira prova: ");
        scanf("%f", &nota2[i]);
        scanf("%*c");

        media[i] = (nota1[i] + nota2[i]) / 2;

        if (media[i] >= 7)
        {
            guardarStats[i] = 1;
        }
        else
        {
            guardarStats[i] = 0;
        }
    }

    printf("Lista Alunos:\n");

    for (int i = 0; i < 15; i++)
    {
        printf("Aluno: %d\n", i + 1);
        printf("Nota primeira prova: %f\n", nota1[i]);
        printf("Nota segunda prova: %f\n", nota2[i]);
        printf("Média: %f\n", media[i]);
        if (guardarStats[i] == 1)
        {
            printf("Aprovado!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }
    }
}