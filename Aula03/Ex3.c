#include <stdio.h>
// 3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de
// 3"ou "Não é múltiplo de 3".

void main()
{
    int num;
    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    if (num % 3 == 0)
    {
        printf("%d é multiplo de 3!", num);
    }
    else
    {
        printf("%d não é multiplo de 3!", num);
    }
}