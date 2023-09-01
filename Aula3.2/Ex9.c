#include <stdio.h>
#include <stdlib.h>
// 9. Faça um programa em C que permita entrar com o ano de nascimento da pessoa e como ano atual. O
// programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o ano de nascimento informado é
// válido.
void main()
{
    int anoNasc, anoAtual, idade;

    printf("Insira o ano que voce nasceu: ");
    scanf("%d", &anoNasc);
    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);

    if (anoAtual < anoNasc)
    {
        printf("Ano informado inválido!");
    }
    else
    {
        idade = anoAtual - anoNasc;

        printf("Sua idade é: %d", idade);
    }
}