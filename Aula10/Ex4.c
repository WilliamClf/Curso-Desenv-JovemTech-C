#include <stdio.h>
// Os ponteiros são excelentes exercícios de lógica, a seguir
// temos uma função main com alguns ponteiros e variáveis.
// Identifique o que será impresso na tela.
void main()
{
    int i = 5, *p;
    p = &i;
    printf("%d, %d, %d ,%d, %d", p, (*p + 2), **&p, (3 * *p), (**&p + 4));
}

// está faltando um fechamento de parêntese na função printf.

//(*p + 2) calcula o valor de *p (o conteúdo de i, que é 5) mais 2, resultando em 7.

//**&p primeiro pega o endereço de p (que é o endereço de i), depois pega o conteúdo desse endereço
// que é i, resultando em 5.

//(3 * (*p)) multiplica 3 pelo conteúdo de i, que é 5, resultando em 15.

//(**&p + 4) primeiro pega o conteúdo de i, que é 5, depois adiciona 4, resultando em 9.