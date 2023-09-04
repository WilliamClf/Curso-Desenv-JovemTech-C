#include <stdio.h>
// 2. Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada.
void main()
{
    char letras[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite uma letra: ");
        scanf(" %c", &letras[i]);
        scanf("%*c");
    }
    printf("Listagem: \n");
    printf("%c", letras[0]);
}