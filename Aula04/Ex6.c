#include <stdio.h>
#include <stdlib.h>
// 6. Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.
// Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados
// a partir da soma dos anteriores. Exemplo:
// • 1 + 1 = 2, terceiro termo;
// • 1 + 2 = 3, quarto termo, etc.

void main()
{
    int termo1 = 1;
    int termo2 = 1;
    int proxTermo;

    printf("%d\n", termo1);
    printf("%d\n", termo2);

    for (int i = 3; i <= 20; i++)
    {
        proxTermo = termo1 + termo2;
        printf("%d\n", proxTermo);
        termo1 = termo2;
        termo2 = proxTermo;
    }
}