#include <stdio.h>
// 2. Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo.
// Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.

struct Hora
{
    int hora;
    int minuto;
    int segundo;
};

void main()
{
    struct Hora vetor[5], maiorHora[0];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a quantidade de horas: ");
        scanf("%d", &vetor[i].hora);

        printf("Digite a quantidade de minutos: ");
        scanf("%d", &vetor[i].minuto);

        printf("Digite a quantidade de segundos: ");
        scanf("%d", &vetor[i].segundo);
    }

    maiorHora[0] = vetor[1];

    for (int i = 1; i < 5; i++)
    {
        if (vetor[i].hora > maiorHora[0].hora ||
            (vetor[i].hora == maiorHora[0].hora && vetor[i].minuto > maiorHora[0].minuto) ||
            (vetor[i].hora == maiorHora[0].hora &&
             vetor[i].minuto == maiorHora[0].minuto && vetor[i].segundo > maiorHora[0].segundo))
        {
            maiorHora[0] = vetor[i];
        }
    }

    printf("A maior hora é: %dh,%dmin, %ds\n", maiorHora[0].hora, maiorHora[0].minuto, maiorHora[0].segundo);
}