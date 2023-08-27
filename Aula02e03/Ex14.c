#include <stdio.h>
// 14. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. Para isso, leia o
// valor em centígrados e calcule com base na fórmula a seguir. Após calcular o programa deve imprimir o
// resultado da conversão.

// F = (9×C +160) / 5

// Em que:
// • F = Graus em Fahrenheit
// • C = Graus centígrados
int main(void)
{
    float tempC;

    printf("Insira a temperatura em Centígrados: ");
    scanf("%f", &tempC);

    float tempF = (9 * tempC) / 5;

    printf("%fC convertido para Fahrenheit é %f", tempC, tempF);
}