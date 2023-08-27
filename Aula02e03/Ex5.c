#include <stdio.h>
// 5. Faça um programa em C que leia dois números reais e os imprima.
int main(void)
{
    float num1, num2;

    printf("Insira um número real: ");
    scanf("%f", &num1);

    printf("Insira outro número real: ");
    scanf("%f", &num2);

    printf("Os números inseridos foram %f e %f", num1, num2);
}