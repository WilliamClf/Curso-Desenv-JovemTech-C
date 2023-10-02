#include <stdio.h>
// 6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários.
// O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa em
// linguagem C que permita entrar com o salário bruto e o valor da prestação e informar se o
// empréstimo pode ou não ser concedido.
void main()
{
    float salario, prest;

    printf("Insira seu sálario: ");
    scanf("%f", &salario);

    printf("Insira a prestação: ");
    scanf("%f", &prest);

    float validarPrest = salario * 0.3;

    if (prest >= validarPrest)
    {
        printf("O empréstimo não pode ser concluido!");
    }
    else
    {
        printf("O empréstimo pode ser concluido");
    }
}