#include <stdio.h>
// 12. Faça um programa em C que leia um número real e calcule o quadrado deste número. Ao final, o
// programa deve imprimir o resultado do cálculo.

int main(void)
{
    double num1;
    printf("Insira um número real: ");
    scanf("%lf", &num1);

    double potencia = num1 * num1;

    printf("O quadrado de %lf é %lf", num1, potencia);
}
