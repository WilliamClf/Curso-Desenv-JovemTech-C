#include <stdio.h>
// 3. Faça um programa em C que leia o valor de um ângulo em graus e o converta, utilizando uma função, para
// radianos e ao final imprima o resultado. Veja a fórmula de cálculo a seguir.
// Em que:
// • rad = ângulo em radianos
// • ang = ângulo em graus
// • pi = número do pi

float calculoRadiano(float angulo, float pi)
{
    float radiano = (angulo * pi) / 180;
    return radiano;
}

void main()
{
    float valueAng;
    float valuePi;

    printf("Digite o valor do angulo: ");
    scanf("%f", &valueAng);

    printf("Digite o valor de pi: ");
    scanf("%f", &valuePi);

    printf("O angulo convertido em radianos é: %f", calculoRadiano(valueAng, valuePi));
}