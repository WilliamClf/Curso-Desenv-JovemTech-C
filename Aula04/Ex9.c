#include <stdio.h>
#include <stdlib.h>
// 9. No dia da estréia do filme "Procurando Dory", uma grande emissora de TV realizou
// uma pesquisa logo após o encerramento do filme. Cada espectador respondeu
// a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
// excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a
// opinião de 20 espectadores, calcule e imprima:
// • A média das idades das pessoas que responderam excelente;
// • A quantidade de pessoas que responderam regular;
// • A percentagem de pessoas que responderam bom entre todos os expectadores
// analisados.

void main()
{

    int totalExc = 0;
    int feedback = 0;
    int idade = 0;
    float totalExcelentes = 0;
    float mediaIdades = 0;
    int somaIdades = 0;
    int contadorRegular = 0;
    int contadorBom = 0;
    int percentBom = 0;

    for (int i = 1; i <= 20; i++)
    {
        printf("Responda o questionário sobre o filme Procurando Dory:\n");
        printf("Excelente - 3\n");
        printf("Bom - 2\n");
        printf("Regular - 1\n");

        printf("Sua Resposta: \n");
        scanf("%d", &feedback);

        printf("Insira sua idade: \n");
        scanf("%d", &idade);

        if (feedback == 3)
        {
            // printf("%d", idade);
            somaIdades += idade;
            totalExc++;
            // printf("%d", somaIdades);
        }
        else if (feedback == 1)
        {
            contadorRegular++;
        }
        else if (feedback == 2)
        {
            contadorBom++;
        }
    }
    mediaIdades = somaIdades;
    mediaIdades = mediaIdades / totalExc;
    printf("media: %f\n", mediaIdades);

    printf("regular: %d\n", contadorRegular);

    percentBom = (contadorBom * 100) / 20;
    printf("bom: %d porcento", percentBom);
}