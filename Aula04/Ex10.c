#include <stdio.h>
#include <stdlib.h>
// 10. Em um campeonato Europeu de Volleyball, se inscreveram 30 países. Sabendo-se
// que na lista oficial de cada país consta, além de outros dados, peso e idade de 12
// jogadores, crie um programa que apresente as seguintes informações:
// • O peso médio e a idade média de cada um dos times;
// • O atleta mais pesado de cada time;
// • O atleta mais jovem de cada time;
// • O peso médio e a idade média de todos os participantes.

void main()
{
    char pais[30];
    int idade = 0;
    float peso = 0;
    int somaIdadesTime = 0;
    float somaPesoTime = 0;
    int somaIdadesPart = 0;
    float somaPesoPart = 0;

    for (int i = 1; i <= 2; i++)
    {
        printf("Insira o páis: ");
        scanf("%[^\n]%*c", &pais);
        scanf("%*[^\n]");
        scanf("%*c");

        for (int i2 = 1; i2 <= 2; i2++)
        {
            printf("Insira os dados do Jogador: %d", i2);

            printf("Insira o peso do atleta: ");
            scanf("%f", &peso);
            scanf("%*c");

            printf("Insira a idade do atleta: ");
            scanf("%d", &idade);
            scanf("%*c");

            somaIdadesTime += idade;
            somaPesoTime += peso;
        }
        // printf("soma idase: %d", somaIdadesTime);
        // printf("soma peso: %f", somaPesoTime);
        //  somaIdadesPart += somaIdadesTime;
        //  somaPesoPart += somaIdadesTime;
    }
}