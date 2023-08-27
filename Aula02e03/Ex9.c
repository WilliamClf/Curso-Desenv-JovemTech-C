#include <stdio.h>
// Faça um programa em C que leia um número real e imprima 1⁄4 deste número.
int main(void)
{
    float num;

    printf("Insira um número real: ");
    scanf("%f", &num);

    float conta = num / 4;
    printf("Um quarto de %f é %f", num, conta);
}