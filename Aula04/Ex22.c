#include <stdio.h>
// 22. Crie um programa que ajude o DETRAN a saber o total de recursos que foram arrecadados
// com a aplicação de multas de trânsito.
// O algoritmo deve ler as seguintes informações para cada motorista:
// • número da carteira de motorista (de 1 a 4327);
// • número de multas;
// • valor de cada uma das multas.
// Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o total de
// recursos arrecadados (somatório de todas as multas). O programa deverá imprimir também o
// número da carteira do motorista que obteve o maior número de multas.
// Obs.: O programa encerra ao ler a carteira de motorista de valor 0.
void main()
{
    int numCarteira;
    int numMultas;
    float valorMulta;
    float totalArrecadado = 0;
    int maiorNumMultas = 0;
    int motoristaComMaisMultas = 0;

    printf("Insira o numero da carteira de motorista (0 para encerrar): ");
    scanf("%d", &numCarteira);

    while (numCarteira != 0)
    {
        printf("Insira o numero de multas para o motorista %d: ", numCarteira);
        scanf("%d", &numMultas);

        float dividaMotorista = 0;

        for (int i = 1; i <= numMultas; i++)
        {
            printf("Insira o valor da multa %d para o motorista %d: ", i, numCarteira);
            scanf("%f", &valorMulta);
            dividaMotorista += valorMulta;
        }

        printf("A divida do motorista %d e: %.2f\n", numCarteira, dividaMotorista);

        totalArrecadado += dividaMotorista;

        if (numMultas > maiorNumMultas)
        {
            maiorNumMultas = numMultas;
            motoristaComMaisMultas = numCarteira;
        }

        printf("\nInsira o numero da carteira de motorista (0 para encerrar): ");
        scanf("%d", &numCarteira);
    }

    printf("\nTotal de recursos arrecadados: %.2f\n", totalArrecadado);
    printf("Motorista com mais multas: %d (Multas: %d)\n", motoristaComMaisMultas, maiorNumMultas);
}