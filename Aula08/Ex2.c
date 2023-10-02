#include <stdio.h>

// 2. Faça um programa que receba as notas de três provas e calcule a média. Para o cálculo, escreva uma
// função. O programa deve imprimir a média ao final.

float calculoMedia(float nota1, float nota2, float nota3)
{
    float media = (nota1 + nota2 + nota3) / 3;
    return media;
}

void main()
{
    float n1, n2, n3;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &n1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &n2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &n3);

    printf("A média das notas é: %.2f", calculoMedia(n1, n2, n3));
}