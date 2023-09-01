#include <stdio.h>
#include <stdlib.h>
// 13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da prova 2 de um aluno. O
// programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das
// mensagens: "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para
// reprovação e as demais em prova final).

void main()
{
    float nota1, nota2, media;
    char nome[200];

    printf("Informe seu nome: ");
    scanf("%[^\n]%*c", nome);

    printf("Informe a nota da prova 1: ");
    scanf("%f", &nota1);

    printf("Informe a nota da prova 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Nome: %s\n", nome);
    printf("Prova 1: %f\n", nota1);
    printf("Prova 2: %f\n", nota2);
    printf("Média: %f\n", media);

    if (media >= 7)
    {
        printf("Aprovado!");
    }
    else if (media > 3 && media < 7)
    {
        printf("Prova final!");
    }
    else
    {
        printf("Reprovado");
    }
}