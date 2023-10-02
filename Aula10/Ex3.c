#include <stdio.h>

// 3) Nesse exercício abandone seu computador por alguns minutos
//  e analise o conteúdo do vetor “a” depois dos seguintes comandos.

main()
{
    int i, a[99];
    for (i = 0; i < 99; ++i)
        a[i] = 98 - i;
    for (i = 0; i < 99; ++i)
        a[i] = a[a[i]];
}

// inicializa um vetor "a" com valores decrescentes de 98 a 0.
// Em seguida, ele reorganiza o vetor "a" de forma que os valores de 0 a 98
// estejam em ordem crescente. Isso é feito usando os valores no vetor como
// índices até que estejam na ordem desejada.