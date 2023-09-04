#include <stdio.h>
// 24. Faça um programa que calcule quantos litros de gasolina são usados em uma viagem, sabendo
// que um carro faz 10 km/litro. O usuário fornecerá a velocidade do carro e o período de tempo que viaja
// nesta velocidade para cada trecho do percurso. Então, usando as fórmulas distância = tempo x
// velocidade e litros consumidos = distância / 10, o programa computará, para todos os valores não
// negativos de velocidade, os litros de combustível consumidos. O programa deverá imprimir a distância
// e o número de litros de combustível gastos naquele trecho. Deverá imprimir também o total de litros
// gastos na viagem. O programa encerra quando o usuário informar um valor negativo de velocidade.

void main()
{
    float distancia;
    float tempo;
    float velocidade;
    float consumo;
    float total;

    do
    {

        printf("Insira a velocidade: ");
        scanf("%f", &velocidade);
        scanf("%*c");

        if (velocidade < 0)
        {
            break;
        }

        printf("Insira o tempo: ");
        scanf("%f", &tempo);
        scanf("%*c");

        distancia = velocidade * tempo;

        consumo = distancia / 10;

        total += consumo;

        printf("Distancia percorrida: %f", distancia);
        printf("Total gasto no trecho: %f", consumo);

    } while (velocidade <= 0);

    printf("Total de litros consumidos: %f", total);
}