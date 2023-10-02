#include <stdio.h>
// 13. Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo
// desconto. Faça um programa que permita entrar com o valor de um produto e o percentual de desconto e
// imprimir o novo valor com base no percentual informado. Para fazer o cálculo, implemente uma função.

float calcularDesconto(float valorProduto, float percentualDesconto)
{
    float NewValorProduto = valorProduto - (valorProduto * percentualDesconto) / 100;
    return NewValorProduto;
}

void main()
{
    float vProduto, pDesconto;

    printf("Digite o valor total do produto: ");
    scanf("%f", &vProduto);

    printf("Digite o valor do desconto: ");
    scanf("%f", &pDesconto);

    printf("O valor do produto com desconto é: %.2f", calcularDesconto(vProduto, pDesconto));
}