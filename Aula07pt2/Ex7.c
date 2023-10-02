#include <stdio.h>
// 7. Astolfolov técnico de um time da série C do poderoso campeonato de futebol profissional da Albânia. Ele
// deseja manter os dados dos seus jogadores guardados de forma minuciosa. Ajude-o fazendo um programa
// para armazenar os seguintes dados de cada jogador: no da camisa, peso (kg), altura (m) e a posição
// em que joga (atacante, defensor ou meio campista). Lembre-se que o time tem 22 jogadores, entre reservas e
// titulares. Leia os dados e depois gere um relatório no vídeo, devidamente tabulado/formatado.

struct jogadores
{
    int numCamisa;
    float peso;
    float alturaCm;
    char posi[20];
};

void main()
{
    struct jogadores jogador[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Insira o número da camisa do atleta: ");
        scanf("%d", &jogador[i].numCamisa);
        printf("Insira o peso do atletaa: ");
        scanf("%f", &jogador[i].peso);
        printf("Insira a altura do atleta: ");
        scanf("%f", &jogador[i].alturaCm);
        scanf("%*c");
        printf("Insira a posiçao do atleta(atacante, defensor ou meio campista): ");
        scanf("%[^\n]%*c", &jogador[i].posi);
    }
    printf("****************ListaDadosJogadores****************\n");

    for (int i = 0; i < 2; i++)
    {
        printf("***********************************************\n");
        printf("*Número da Camisa: %d\n", jogador[i].numCamisa);
        printf("*Peso: %f\n", jogador[i].peso);
        printf("*Altura: %f\n", jogador[i].alturaCm);
        printf("*Posição: %s\n", jogador[i].posi);
    }
}
