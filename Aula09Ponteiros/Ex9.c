#include <stdio.h>
// 9. A Google está desenvolvendo um novo sistema operacional para máquinas de venda de bolinhas de
// borracha de R$1,00, mas precisa realizar testes no Gerenciador de Memória desse novo sistema. Você foi
// contratado para fazer um programa para verificar se o gerenciador de memória está funcionando
// corretamente. Seu programa deverá ler 3 números inteiros, 3 números decimais, 3 letras, armazená-las em
// variáveis, e depois, através de ponteiros, trocar os seus valores, substituindo todos os números inteiros pelo
// número 2014, os decimais por 9.99, e as letras por ’Y’. Depois da substituição, o programa deverá exibir o
// valor das variáveis já devidamente atualizados.
// Função para ler números inteiros
void lerNumerosInteiros(int numeros[])
{
    printf("Digite 3 números inteiros: ");
    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);
}

void lerNumerosDecimais(float numeros[])
{
    printf("Digite 3 números decimais: ");
    scanf("%f %f %f", &numeros[0], &numeros[1], &numeros[2]);
}

void lerLetras(char letras[])
{
    printf("Digite 3 letras: ");
    scanf(" %c %c %c", &letras[0], &letras[1], &letras[2]);
}
void substituirValores(int numerosInteiros[], float numerosDecimais[], char letras[])
{
    int novoInteiro = 2014;
    float novoDecimal = 9.99;
    char novaLetra = 'Y';

    for (int i = 0; i < 3; i++)
    {
        numerosInteiros[i] = novoInteiro;
        numerosDecimais[i] = novoDecimal;
        letras[i] = novaLetra;
    }
}

void exibirValores(int numerosInteiros[], float numerosDecimais[], char letras[])
{
    printf("Valores atualizados:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Número inteiro: %d\n", numerosInteiros[i]);
        printf("Número decimal: %.2f\n", numerosDecimais[i]);
        printf("Letra: %c\n", letras[i]);
    }
}

void main()
{
    int numerosInteiros[3];
    float numerosDecimais[3];
    char letras[3];

    lerNumerosInteiros(numerosInteiros);
    lerNumerosDecimais(numerosDecimais);
    lerLetras(letras);

    substituirValores(numerosInteiros, numerosDecimais, letras);

    exibirValores(numerosInteiros, numerosDecimais, letras);
}