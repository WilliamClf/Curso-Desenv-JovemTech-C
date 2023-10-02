#include <stdio.h>
// 1. Faça um programa que leia o saldo e o % de reajuste de uma aplicação financeira e imprimir o novo saldo
// após o reajuste. O cálculo deve ser feito por uma função.
// novoSalario[i] = salario[i] * 1.08;
float calculoReajuste(float saldo, float porcentReajuste)
{
    float novoSaldo = novoSaldo = saldo * (1 + (porcentReajuste / 100));
    return novoSaldo;
}

void main()
{

    float saldo, porcentReajuste;
    printf("Digite o saldo atual de sua aplicação: ");
    scanf("%f", &saldo);
    scanf("%*c");
    printf("Digite a porcentagem do reajuste: ");
    scanf("%f", &porcentReajuste);
    scanf("%*c");

    printf("O novo saldo da sua aplicação é: %.2f", calculoReajuste(saldo, porcentReajuste));
}