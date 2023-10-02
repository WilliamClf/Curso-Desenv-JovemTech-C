#include <stdio.h>
// 2. Faça um programa que leia o raio de um círculo e imprima o perímetro e a área. Para fazer os cálculos,
// implemente duas funções, cada uma deve realizar um cálculo específico conforme solicitado. Utilize as fórmulas
// a seguir.
// perimetro = 2 . pi . raio
// area = pi . raio

float calculoPerimetro(float pi, float raio)
{
    float perimetro = 2 * pi * raio;
    return perimetro;
}

float calculoArea(float pi, float raio)
{
    float area = pi * raio;
    return area;
}

void main()
{
    float pi, raio;
    int escolha;

    printf("Deseja calcular área(1), perimêtro(2), os dois(3)?: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Digite o valor de pi:");
        scanf("%f", &pi);
        printf("Digite o valor do raio:");
        scanf("%f", &raio);

        printf("A área do raio é %.2f", calculoArea(pi, raio));
        break;
    case 2:
        printf("Digite o valor de pi:");
        scanf("%f", &pi);
        printf("Digite o valor do raio:");
        scanf("%f", &raio);
        printf("O perimêtro do circulo é %.2f", calculoPerimetro(pi, raio));

        break;
    case 3:
        printf("Digite o valor de pi:");
        scanf("%f", &pi);
        printf("Digite o valor do raio:");
        scanf("%f", &raio);
        printf("A área do circulo é %.2f\n", calculoArea(pi, raio));
        printf("O perimêtro do circulo é %.2f", calculoPerimetro(pi, raio));
        break;
    }
}
