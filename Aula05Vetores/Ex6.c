#include <stdio.h>
// 6. Construa um programa que permita armazenar o salário de 20 pessoas. Calcular e armazenar o novo
// salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o salário e o novo
// salário. Declare quantos vetores forem necessários.

void main()
{

    float salario[20];
    float novoSalario[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Insira seu sálario: ");
        scanf("%f", &salario[i]);
        scanf("%*c");

        novoSalario[i] = salario[i] * 1.08;
    }

    printf("Tabela de Reajuste:\n");

    for (int i = 0; i < 20; i++)
    {
        printf("Colaborador: %d\n", i + 1);
        printf("Sálario: %f\n", salario[i]);
        printf("Salário novo: %f\n", novoSalario[i]);
    }
}