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
    printf("%c\n", letras[0]);
    printf("%c\n", letras[1]);
    printf("%c\n", letras[2]);
    printf("%c\n", letras[3]);
    printf("%c\n", letras[4]);
    printf("%c\n", letras[5]);
    printf("%c\n", letras[6]);
    printf("%c\n", letras[7]);
    printf("%c\n", letras[8]);
    printf("%c\n", letras[9]);
}