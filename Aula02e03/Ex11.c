#include <stdio.h>
// 11. Faça um programa em C que leia dois números reais e calcule as quatro operações básicas entre estes
// dois números, adição, subtração, multiplicação e divisão. Ao final, o programa deve imprimir os resultados dos
// cálculos.

int main(void)
{
    double num1, num2;

    printf("Insira um número real: ");
    scanf("%lf", &num1);

    printf("Insira outro número real: ");
    scanf("%lf", &num2);

    double adi = num1 + num2;
    double sub = num1 - num2;
    double multipli = num1 * num2;
    double div = num1 / num2;

    printf("*****************\n");
    printf("A adição entre %lf e %lf é: %lf\n", num1, num2, adi);
    printf("A subtração entre %lf e %lf é: %lf\n", num1, num2, sub);
    printf("A multiplicação entre %lf e %lf é: %lf\n", num1, num2, multipli);
    printf("A divisão entre %lf e %lf é: %lf\n", num1, num2, div);
    printf("*****************");
}