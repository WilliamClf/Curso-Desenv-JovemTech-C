#include <stdio.h>
// 20. Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
// • Qual o seu time de coração?
// 1-Fluminense;
// 2-Botafogo;
// 3-Vasco;
// 4-Flamengo;
// 5-Outros
// • Onde você mora?
// 1-RJ;
// 2-Niterói;
// 3-Outros
// • Qual o seu salário?
// Faça um programa que imprima: o número de torcedores por clube;
// a média salarial dos torcedores do
// Botafogo; o número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes; o número
// de pessoas de Niterói torcedoras do Fluminense
void main()
{

    int time = 0;
    int flu = 0;
    int btfg = 0;
    int vsc = 0;
    int fla = 0;
    int outros = 0;
    int local = 0;
    int rj = 0;
    int nit = 0;
    int outrosLocal = 0;
    int contadorOutrosrj = 0;
    int contadorNiteroi = 0;

    float salario = 0;
    float salariobot = 0;
    float mediaSalario = 0;

    for (int i = 1; i <= 10; i++)
    {

        printf("Qual o seu time do coracao?: \n");
        printf("1-Fluminense\n");
        printf("2-Botafogo\n");
        printf("3-Vasco\n");
        printf("4-Flamengo\n");
        printf("5-Outros\n");
        printf("Sua resposta: \n");
        scanf("%d", &time);
        scanf("%*c");

        printf("Onde voce mora?: \n");
        printf("1-RJ\n");
        printf("2-Niterói\n");
        printf("3-Outros\n");
        printf("Sua resposta: \n");
        scanf("%d", &local);
        scanf("%*c");

        printf("Qual o seu salário?\n");
        scanf("%f", &salario);
        scanf("%*c");

        if (time == 5 && local == 1)
        {
            contadorOutrosrj++;
        }
        else if (time == 1 && local == 2)
        {
            contadorNiteroi++;
        }

        switch (time)
        {

        case 1:
            flu++;
            break;

        case 2:
            btfg++;
            salariobot += salario;
            break;

        case 3:
            vsc++;
            break;

        case 4:
            fla++;
            break;

        case 5:
            outros++;
            break;
        }
    }

    mediaSalario = salariobot / btfg;

    printf("Dados!\n");
    printf("Número de torcedores:\n");
    printf("Fluminense: %d\n", flu);
    printf("Botafogo: %d\n", btfg);
    printf("Vasco: %d\n", vsc);
    printf("Flamengo: %d\n", fla);
    printf("Outros: %d\n", outros);
    printf("Média Salarial Torcedores do Botafogo: %f\n", mediaSalario);
    printf("Pessoas que moram no Rio de Janeiro e torcem para outros: %d\n", contadorOutrosrj);
    printf("Pessoas que moram em Niteroi e torcem para o Fluminense: %d\n", contadorNiteroi);
}