#include <stdio.h>
#include <math.h>
// 1. Crie uma estrutura para representar as coordenadas de umponto no plano (posições
// X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
// dele até a origem das coordenadas, isto é, posição (0, 0). Para realizar o cálculo,
// utilize a fórmula a seguir:
// Em que:
// • d = distância entre os pontos A e B
// • X = coordenada X em um ponto
// • Y = coordenada Y em um ponto

struct ponto
{
    float x;
    float y;
};

void main()
{
    struct ponto ponto;

    float distancia;

    printf("Digite a coordenada X: ");
    scanf("%f", &ponto.x);
    printf("Digite a coordenada Y: ");
    scanf("%f", &ponto.y);

    distancia = sqrt(pow(0 - ponto.x, 2) + pow(0 - ponto.y, 2));

    printf("A distância das cordenadas é: %.2f\n", distancia);
}