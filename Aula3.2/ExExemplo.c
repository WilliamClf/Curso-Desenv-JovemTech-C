// Escreva um programa em linguagem C que leia um peso na Terra e o número de
// um planeta e imprima o valor correspondente do peso neste planeta. A relação de
// planetas é dada a seguir juntamente com o valor das gravidades relativas à Terra.
// Emque:
// • PP = Peso no planeta
// • PT = Peso na Terra
// • G = Gravidade relativa
#include <stdio.h>
#include <stdlib.h>

void main()
{

    float pp, pt;
    int g;

    printf("Insira o peso na Terra do o objeto: ");
    scanf("%f", &pt);

    printf("\nMercurio: 1 \nVenus: 2 \nMarte: 3 \nJupiter: 4 \nSaturno: 5 \nUrano: 6 \nInsira a gravidade relativa do planeta:");
    scanf("%d", &g);

    switch (g)
    {

    case 1:
        pp = (pt / 10) * 0.37;
        printf("O peso do objeto em Mercurio é: %f", pp);
        break;
    case 2:
        pp = (pt / 10) * 0.88;
        printf("O peso do objeto em Venus é: %f", pp);
        break;
    case 3:
        pp = (pt / 10) * 0.38;
        printf("O peso do objeto em Marte é: %f", pp);
        break;
    case 4:
        pp = (pt / 10) * 2.64;
        printf("O peso do objeto em Jupiter é: %f", pp);
        break;
    case 5:
        pp = (pt / 10) * 1.15;
        printf("O peso do objeto em Saturno é: %f", pp);
        break;
    case 6:
        pp = (pt / 10) * 1.17;
        printf("O peso do objeto em Urano é: %f", pp);
        break;

    default:
        printf("Número inválido!");
    }
}