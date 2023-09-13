#include <stdio.h>
// 17. A Viação José Maria Rodrigues tem na Rodoviária de Rio Novo uma tabela contendo os horários de
// partidas dos ônibus para Juiz de Fora nos sete dias da semana. Faça um programa que possa armazenar
// esses horários e os horários do dia quando forem solicitados pelo funcionário, sabendo-se que, no máximo,
// são
// dez horários. Ao final, o programa deve imprimir a lista de horários para todos os dias.

void main()
{
    char horarios[7][10][10];

    for (int dia = 0; dia < 7; dia++)
    {
        printf("Dia %d:\n", dia + 1);

        for (int i = 0; i < 10; i++)
        {
            printf("Informe o horário %d ou digite 'FIM' para encerrar: ", i + 1);
            scanf("%s", horarios[dia][i]);

            for (int j = 0; j < 3; j++)
            {
                if (horarios[dia][i][j] != "FIM"[j])
                {
                    break;
                }
            }
            int j;
            if (j == 3)
            {
                break;
            }
        }
    }

    for (int dia = 0; dia < 7; dia++)
    {
        printf("Horários para o dia %d:\n", dia + 1);
        for (int i = 0; i < 10 && horarios[dia][i][0] != '\0'; i++)
        {
            printf("%s\n", horarios[dia][i]);
        }
    }
}
