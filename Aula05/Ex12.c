#include <stdio.h>
// 12. Crie um programa para gerenciar um sistema de reservas de mesas em uma casa
// de espetáculo. A casa possui 30 mesas de 5 lugares cada. O programa deverá permitir que o usuário
// escolha o código de uma mesa (100 a 129) e forneça a quantidade de lugares desejados. O programa
// deverá informar se foi possível realizar a reserva e atualizar a reserva. Se não for possível, o programa
// deverá emitir uma mensagem. O programa deve terminar quando o usuário digitar o código 0 (zero) para
// uma mesa ou quando todos os 150 lugares estiverem ocupados.

void main()
{
    int mesas[30];
    int codigoMesa, lugaresDesejados;
    int lugaresOcupados = 0;

    while (1)
    {
        printf("Código da mesa (100 a 129) ou 0 para sair: ");
        scanf("%d", &codigoMesa);

        printf("Quantidade de lugares desejados: ");
        scanf("%d", &lugaresDesejados);

        int indiceMesa = codigoMesa - 100;

        if (mesas[indiceMesa] == 5)
        {
            printf("Esta mesa já está totalmente ocupada.\n");
        }
        else if (mesas[indiceMesa] + lugaresDesejados <= 5)
        {
            mesas[indiceMesa] += lugaresDesejados;
            lugaresOcupados += lugaresDesejados;
            printf("Reserva realizada com sucesso!\n");
        }
        else
        {
            printf("Não há lugares suficientes nesta mesa.\n");
        }

        if (lugaresOcupados == 30 * 5)
        {
            printf("Todos os lugares estão ocupados. Encerrando as reservas.\n");
            break;
        }
    }

    printf("Reservas realizadas:\n");
    for (int i = 0; i < 30; i++)
    {
        printf("Mesa %d: %d lugares reservados\n", 100 + i, mesas[i]);
    }
}