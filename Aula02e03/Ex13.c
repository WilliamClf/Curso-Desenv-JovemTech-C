#include <stdio.h>
// 13. Faça um programa em C que leia a base e a altura de um retângulo e imprima o perímetro (base +
// altura) e a área (base * altura).

int main(void)
{
    double base, altura;

    printf("Informe a base do retângulo: ");
    scanf("%lf", &base);

    printf("Informe a altura do retângulo: ");
    scanf("%lf", &altura);

    double perimetro = base + base + altura + altura;
    double area = base * altura;

    printf("O perimetro do retângulo é: %lf\n", perimetro);
    printf("A area do retângulo é: %lf", area);
}