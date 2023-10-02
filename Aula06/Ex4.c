#include <stdio.h>
// 4 – Faça um programa que leia n nomes e ordene-os pelo tamanho utilizando o algoritmo da seleção. No
// final, o algoritmo deve mostrar todos os nomes ordenados.

void main() {
 int n, i, j;
    char nomes[n][100];
    char temp[100];

    printf("Digite o número de nomes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o nome #%d: ", i + 1);
        scanf("%s", nomes[i]);
    }


    for (i = 0; i < n - 1; i++) {
        int min = i;

        for (j = i + 1; j < n; j++) {
            if (strlen(nomes[j]) < strlen(nomes[min])) {
                min = j;
            }
        }

        
        strcpy(temp, nomes[i]);
        strcpy(nomes[i], nomes[min]);
        strcpy(nomes[min], temp);
    }

    printf("\nNomes ordenados pelo tamanho:\n");

    for (i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

}
