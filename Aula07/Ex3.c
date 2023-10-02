#include <stdio.h>
#include <math.h>
// 3. Cria uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto
// inferior direito do retângulo, a qual contém as posições X e Y de cada ponto. Faça um programa que declare e
// leia uma estrutura retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.
struct Retangulo
{
    struct Ponto
    {
        float x;
        float y;
    } superior_esquerdo, inferior_direito;
};
void main()
{
    struct Retangulo ret;

    ret.superior_esquerdo.x = 0.0;
    ret.superior_esquerdo.y = 5.0;

    ret.inferior_direito.x = 8.0;
    ret.inferior_direito.y = 0.0;

    float largura = fabs(ret.inferior_direito.x - ret.superior_esquerdo.x);
    float altura = fabs(ret.inferior_direito.y - ret.superior_esquerdo.y);

    float area = largura * altura;

    float diagonal = sqrt(pow(largura, 2) + pow(altura, 2));

    float perimetro = 2 * (largura + altura);

    printf("Área do retângulo: %.2f\n", area);
    printf("Comprimento da diagonal: %.2f\n", diagonal);
    printf("Perímetro do retângulo: %.2f\n", perimetro);
}
