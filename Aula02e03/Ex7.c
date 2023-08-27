#include <stdio.h>
// 7. Faça um programa em C que leia três números reais e calcule a média aritmética desses números. Ao
// final, o programa deve imprimir o resultado do cálculo.
int main(void)
{
    float num1, num2, num3;

    printf("Insira o primeiro número real: ");
    scanf("%f", &num1);

    printf("Insira o segundo número real: ");
    scanf("%f", &num2);

    printf("Insira o terceiro número real: ");
    scanf("%f", &num3);

    float contaMedia = (num1 + num2 + num3) / 3;

    printf("A média aritmética dos números %f, %f e %f é %f", num1, num2, num3, contaMedia);
}