#include <stdio.h>

// 1. Uma das atividades mais desafiadoras aos programadores é entender
//  o código feito por outras pessoas. Isso fica ainda pior
// quando existem erros ou “bugs” nos códigos. Então, para você
// praticar um pouco isso os trexos de código abaixo possuem
// alguns erros. Identifique-os e reescreva indicando como deveriam ser?
// Ponteiros

// c)
//  main(){
// char *a, *b;
// a = "abacate";
// b = "uva”;
// if (a < b)
// printf (" %s vem antes de %s no dicionário", a, b);
// else
// printf (" %s vem depois de %s no dicionário", a, b);
// }

void main()
{
    char *a, *b;
    a = "abacate";
    b = "uva";
    if (a < b)
        printf(" %s vem antes de %s no dicionário", a, b);
    else
        printf(" %s vem depois de %s no dicionário", a, b);
}
