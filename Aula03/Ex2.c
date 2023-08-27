#include <stdio.h>
// 2. Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o valor
// somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor
// somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.

void main()
{
    int num1, num2, adicao;

    printf("Insira um número inteiro: ");
    scanf("%d", &num1);

    printf("Insira outro número inteiro: ");
    scanf("%d", &num2);

    adicao = num1 + num2;

    if (adicao > 20)
    {
        int adicaoV = adicao + 8;
        printf("O resultado somado a 8 é %d", adicaoV);
    }
    else if (adicao <= 20)
    {
        int adicaoF = adicao - 5;
        printf("O resultado subtraindo 5 é %d", adicaoF);
    }
}