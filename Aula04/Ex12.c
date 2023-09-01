#include <stdio.h>
// 12. Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
// ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao
// ano, fazer um programa que calcule e imprima o tempo necessário para que a
// população do país A ultrapasse a população do país B.

void main()
{
    int paisA = 500000000;
    int paisB = 700000000;
    float taxaA = 0.03;
    float taxaB = 0.02;
    int anos;

    do
    {
        paisA += paisA * taxaA;
        paisB += paisB * taxaB;

        anos++;
    } while (paisA <= paisB);

    printf("O tempo necessario para a população do país A ultrapasse a população do país B: %d anos.", anos);
}