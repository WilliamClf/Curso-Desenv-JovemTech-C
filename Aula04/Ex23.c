#include <stdio.h>
// 23. Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso
// e altura) dos atletas que participaram de uma olimpíada, e informar:
// • a atleta do sexo feminino mais alta;
/// • o atleta do sexomasculinomais pesado;
// • a média de idade dos atletas.
// Obs.: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um
// atleta.

void main()
{
    char nome[100];
    char sexo;
    int idade;
    float peso, altura;
    char atletaMaisAltoNome[100];
    float atletaAltura = 0;
    char atletaMaisPesNome[100];
    float atletaPeso = 0;
    int total_atletas = 0;
    int soma_idades = 0;

    printf("Insira o nome do atleta ou '@' para encerrar: ");
    scanf("%s", nome);

    while (nome[0] != '@')
    {
        printf("Insira o sexo do atleta F ou M: ");
        scanf(" %c", &sexo);
        printf("Insira a idade do atleta: ");
        scanf("%d", &idade);
        printf("Insira o peso do atleta: ");
        scanf("%f", &peso);
        printf("Insira a altura do atleta: ");
        scanf("%f", &altura);

        soma_idades += idade;
        total_atletas++;

        if (sexo == 'F' && altura > atletaAltura)
        {
            atletaAltura = altura;
            strcpy(atletaMaisAltoNome, nome);
        }

        if (sexo == 'M' && peso > atletaPeso)
        {
            atletaPeso = peso;
            strcpy(atletaMaisPesNome, nome);
        }

        printf("\nInsira o nome do próximo atleta ou '@' para encerrar: ");
        scanf("%s", nome);
    }

    if (total_atletas > 0)
    {
        float media_idades = (float)soma_idades / total_atletas;

        printf("\nAtleta feminina mais alta: %s\n", atletaMaisAltoNome);
        printf("Atleta masculino mais pesado: %s\n", atletaMaisPesNome);
        printf("Média de idade dos atletas: %.2f\n", media_idades);
    }
    else
    {
        printf("Nenhum atleta registrado.\n");
    }
}