#include <stdio.h>
// 16. Sabendo-se que a unidade lógica e aritmética calcula a divisão por meio de subtrações
// sucessivas, criar um algoritmo que calcule e imprima o resto da divisão de
// números inteiros lidos. Para isso, basta subtrair o divisor ao dividendo, sucessivamente,
// até que o resultado seja menor do que o divisor. O número de subtrações realizadas corresponde
// ao quociente inteiro e o valor restante da subtração corresponde ao resto. Suponha que os
// números lidos sejam positivos e que o dividendo seja maior do que o divisor.
void main()
{
    int dividendo;
    int divisor;
    int sub;

    printf("Insira o dividendo: \n");
    scanf("%d", &dividendo);

    printf("Insira o divisor: \n");
    scanf("%d", &divisor);

    if (dividendo < 0)
    {
        printf("Dividendo inserido inválido!\n");
    }
    else if (divisor < 0)
    {
        printf("Divisor inserido inválido!\n");
    }
    else if (dividendo < divisor)
    {
        printf("Insira um dividendo maior que o divisor!\n");
    }
    else
    {
        sub = dividendo;
        do
        {
            sub -= divisor;
        } while (sub >= divisor);

        printf("Resto: %d", sub);
    }
}