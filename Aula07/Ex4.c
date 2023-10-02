#include <stdio.h>
// 4. Usando a estrutura retângulo do exercício anterior, faça um programa que declare e leia uma estrutura
// retângulo e um ponto, e informe se esse ponto está ou não dentro do retângulo.

struct Ponto
{
    float x;
    float y;
};

struct Retangulo
{
    struct Ponto superior_esquerdo;
    struct Ponto inferior_direito;
};

void main()
{
    struct Retangulo ret;
    struct Ponto ponto;

    printf("Digite as coordenadas do ponto superior esquerdo do retângulo (x y): ");
    scanf("%f %f", &ret.superior_esquerdo.x, &ret.superior_esquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito do retângulo (x y): ");
    scanf("%f %f", &ret.inferior_direito.x, &ret.inferior_direito.y);

    printf("Digite as coordenadas do ponto a ser verificado (x y): ");
    scanf("%f %f", &ponto.x, &ponto.y);

    if (ponto.x >= ret.superior_esquerdo.x &&
        ponto.x <= ret.inferior_direito.x &&
        ponto.y >= ret.superior_esquerdo.y &&
        ponto.y <= ret.inferior_direito.y)
    {
        printf("O ponto está dentro do retângulo.\n");
    }
    else
    {
        printf("O ponto está fora do retângulo.\n");
    }
}