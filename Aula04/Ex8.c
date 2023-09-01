#include <stdio.h>
// 8. Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
// Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
// calculado conforme a tabela a seguir:
void main()
{
    char nome[50];
    float salario;

    for (int i = 1; i <= 5; i++)
    {
        printf("Insira seu nome: ");
        scanf("%[^\n]%*c", &nome);
        scanf("%*[^\n]");
        scanf("%*c");

        printf("Insira seu sálario: ");
        scanf("%f", &salario);
        scanf("%*c");

        if (salario < 1300)
        {
            printf("Nome: %s\n", nome);
            printf("ISENTO!\n");
        }
        else if (salario >= 1300 && salario < 2300)
        {
            float imposto = salario * 0.10;
            printf("Nome: %s\n", nome);
            printf("Valor do imposto: %f\n", imposto);
        }
        else if (salario >= 2300)
        {
            float imposto = salario * 0.15;
            printf("Nome: %s\n", nome);
            printf("Valor do imposto: %f\n", imposto);
        }
    }
}