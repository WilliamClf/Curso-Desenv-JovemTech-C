#include <stdio.h>

// Analise o código abaixo e explique cada uma das linhas usando comentários.

main()
{
    int x = 100, *p, **pp;
    p = &x;
    pp = &p;
    printf("Valor de pp: %dn", **pp);
}

// O código cria uma cadeia de ponteiros
// e imprime o valor da variável x através dessa cadeia de ponteiros.
// O resultado impresso será "Valor de pp: 100"