#include <stdio.h>
#include <stdlib.h>
// 4. Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20
// pessoas.Oprograma deve imprimir o nome da pessoa se ela for do sexo masculino e
// tiver mais de 21 anos.

void main()
{
    char nome[100];
    char sexo;
    int idade;

    for (int i = 1; i <= 20; i++)
    {
        printf("Insira seu nome: ");
        scanf("%[^\n]%*c", &nome);
        scanf("%*[^\n]");
        scanf("%*c");

        printf("Insira sua idade: ");
        scanf("%d", &idade);
        scanf("%*c");

        while (idade <= 0)
        {
            printf("Insira sua idade: ");
            scanf("%d", &idade);
            scanf("%*c");
        }

        do
        {
            printf("Informe seu sexo M ou F: ");
            scanf("%c", &sexo);
            scanf("%*c");

        } while (sexo != 'M' && sexo != 'F');

        if ((sexo == 'M' || sexo == 'm') && idade >= 21)
        {
            printf("Nome: %s", nome);
            printf("Válido!!\n");
        }
        else
        {
            printf("Inválido!\n");
        }
    }
}
