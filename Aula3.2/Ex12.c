#include <stdio.h>
#include <stdlib.h>
// 12. Faça um programa que leia a idade de uma pessoa e informe:
// • Se é maior de idade
// • Se é menor de idade
// • Se é maior de 65 anos
void main()
{
    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade >= 65)
    {
        printf("Voce tem mais de 65 anos!");
    }
    else if (idade >= 18 && idade < 65)
    {
        printf("Voce é maior de idade!");
    }
    else
    {
        printf("Voce é menor de idade!");
    }
}
