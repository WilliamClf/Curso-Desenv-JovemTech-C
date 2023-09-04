#include <stdio.h>
// 21. Em uma universidade cada aluno possui os seguintes dados:
// • Renda pessoal;
// • Renda familiar;
// • Total gasto com alimentação;
// • Total gasto com outras despesas;
// Faça um programa que imprima a porcentagem dos alunos que gasta acima de
// R$200,00 com outras despesas. O número de alunos com renda pessoal maior que a
// renda familiar e a porcentagem gasta com alimentação e outras despesas em relação às
// rendas pessoal e familiar. Obs.: O programa encerra quando se digita 0 para a renda
// pessoal.
void main()
{
    float rendap;
    float rendaf;
    float totalAlim;
    float totalODesp;

    int contadorDesp = 0;
    int contadorAlunos = 0;
    int contadorRendasM = 0;

    float somaD;
    float somaR;
    float porcentGasto;
    float porcentAlunos;

    do
    {
        printf("Caso queira encerrar as perguntas insira o numero 0\n");

        printf("Insira sua renda pessoal :\n");
        scanf("%f", &rendap);
        scanf("%*c");

        printf("Insira sua renda familiar :\n");
        scanf("%f", &rendaf);
        scanf("%*c");

        printf("Insira o total gasto com alimentacao :\n");
        scanf("%f", &totalAlim);
        scanf("%*c");

        printf("Insira o total gasto com outros alimentos:\n");
        scanf("%f", &totalODesp);
        scanf("%*c");

        if (totalODesp > 200)
        {
            contadorDesp++;
        }
        else if (rendap > rendaf)
        {
            contadorRendasM++;
        }

        contadorAlunos++;

        porcentAlunos = (contadorDesp / contadorAlunos) * 100;

        somaR += rendap + rendaf;

        somaD += totalAlim + totalODesp;

        porcentGasto = (somaD / somaR) * 100;
    } while (rendap != 0);

    printf("Dados:");
    printf("Porcentagem dos alunos que gasta acima de R$200,00: %f \n", porcentAlunos);
    printf("Número de alunos com renda pessoal maior que a renda familiar: %d \n", contadorRendasM);
    printf("Porcentagem gasta com alimentação e outras despesas em relação às rendas pessoal e familiar: %f\n", porcentGasto);
}