#include <stdio.h>
#include <string.h>
// 3. Implemente um programa que leia uma mensagem e um caractere. Após a leitura, o programa deve, por
// meio de função, retirar todas as ocorrências do caractere informado na mensagem colocando * em seu lugar. A
// função deve também retornar o total de caracteres retirados. Ao final, o programa deve imprimir a frase
// ajustada e a quantidade de caracteres substituídos.

char retirarCaracteres(char str[], char caractere)
{
    int tamanho = (strlen(str));
    int subs = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (str[i] == caractere)
        {
            str[i] = '*';
            subs++;
        }
    }
    return subs;
}

void main()
{
    char mensagem[80];
    char caractere;
    int substituicoes;

    printf("Digite uma mensagem:");
    scanf("%[^\n]%*c", &mensagem);
    scanf("%*c");

    printf("Digite o caractere que deseja retirar da mensagem: ");
    scanf("%c", &caractere);

    substituicoes = retirarCaracteres(mensagem, caractere);

    printf("Mensagem ajustada: %s\n", mensagem);
    printf("Total de caracteres substituídos: %d\n", substituicoes);
}