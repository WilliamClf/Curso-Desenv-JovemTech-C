#include <stdio.h>

// 8) Vamos criar uma função agora que localiza uma letra em um vetor
// e retorna um outro vetor com suas posições onde a letra foi encontrada.
// Por exemplo:

// 0 1 2 3 4
//[v][a][n][i][a]
//  output procurando a letra "a"
//[1][4]

void localizarLetra(char vet[], char letra)
{
    printf("Posições onde a letra '%c' foi encontrada:\n", letra);
    for (int i = 0; vet[i] != '\0'; i++)
    {
        if (vet[i] == letra)
        {
            printf("[%d] ", i);
        }
    }
    printf("\n");
}

int main()
{
    char vet[] = "arara";
    char letra = 'a';

    localizarLetra(vet, letra);
}