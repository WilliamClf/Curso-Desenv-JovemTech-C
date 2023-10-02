#include <stdio.h>
// 15. Construa um programa em C que leia um caractere (letra) e, por meio de uma função, retorne se este
// caractere é uma consoante ou uma vogal. Ao final imprima o resultado.

int verificarVogalConsoante(char letra)
{
    int count;

    if (letra == 'A' || letra == 'a' ||
     letra == 'E' || letra == 'e' ||
      letra == 'I' || letra == 'i' ||
       letra == 'O' || letra == 'o' ||
        letra == 'U' || letra == 'u')
    {
        count = 1;
    }
    else
    {
        count = 0;
    }

    return count;
}

void main()
{
    char l;
    int c;

    printf("Digite uma letra: ");
    scanf("%c", &l);

    c = verificarVogalConsoante(l);

    if (c == 1)
    {
        printf("%c é uma vogal!");
    }
    else
    {
        printf("%c é uma consoante!");
    }
}