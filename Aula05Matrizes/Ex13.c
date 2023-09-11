#include <stdio.h>
// 13. A gerente do cabeleireiro Sempre Bela tem uma tabela em que registra as quantidades de serviços
// executados nos "pes", nas "mãos"e o serviço de podologia das cinco manicures. Sabendo-se que cada uma
// ganha 50% do que faturou ao mês, criar um programa que possa calcular e imprimir quanto cada uma vai
// receber, uma vez que não têm carteiras assinadas, os valores, respectivamente, são: R$10,00, R$15,00 e
// R$30,00.

void main()
{

    int servicos[5][3];
    float valorF[5];
    float pagamento = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Profissional %d, Quantidade de serviços nos pés: ", i + 1);
        scanf("%d", &servicos[i][0]);

        printf("Profissional %d, Quantidade de serviços nas mãos: ", i + 1);
        scanf("%d", &servicos[i][1]);

        printf("Profissional %d, Quantidade de serviços de podologia: ", i + 1);
        scanf("%d", &servicos[i][2]);

        valorF[i] = (servicos[i][0] * 10.0) + (servicos[i][1] * 15.0) + (servicos[i][2] * 30.0);

        pagamento = valorF[i] * 0.5;

        printf("Profissional %d, Pagamento: R$%f\n", i + 1, pagamento);
    }
}