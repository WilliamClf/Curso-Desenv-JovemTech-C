#include <stdio.h>
// 6. Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.
int main(void)
{
    int num;
    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    int antecessor = num - 1;
    int sucessor = num + 1;

    printf("O antecessor de %d é %d e o sucesor é %d", num, antecessor, sucessor);
}