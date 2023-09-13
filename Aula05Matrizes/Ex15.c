#include <stdio.h>
// 15. A matriz dados contémna 1a coluna a matrícula do aluno; na 2a, o sexo (0 para feminino e 1 para
// masculino); na 3a, o código do curso, e na 4a, o CR (coeficiente de rendimento). Faça um programa que
// armazene esses dados sabendo-se que o código do curso é uma parte da matrícula: aascccnnn (aa ano, s
// semestre, ccc código do curso e nnn matrícula no curso). Além disso, um grupo empresarial resolveu premiar
// a aluna com CR mais alto de um curso cujo código deverá ser digitado. Suponha 10 alunos e que o CR é um
// nmro inteiro.

void main()
{
    int cr[10];
    char matricula[10][10];
    int sexo[10];
    int codCurso[10];
    int codBuscado;
    char alunaComCRMaisAlto[10];
    int CRMaisAlto = -1;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira a matricula do aluno %d: ", i + 1);
        scanf("%s", matricula[i]);
        printf("Insira o sexo do aluno %d (0 para feminino, 1 para masculino): ", i + 1);
        scanf("%d", &sexo[i]);
        printf("Insira o código do curso do aluno %d: ", i + 1);
        scanf("%d", &codCurso[i]);
        printf("Insira o (CR) do aluno %d: ", i + 1);
        scanf("%d", &cr[i]);
    }
    printf("Digite o código do curso para encontrar a aluna com o CR mais alto: ");
    scanf("%d", &codBuscado);

    for (int i = 0; i < 10; i++)
    {
        if (codCurso[i] == codBuscado && sexo[i] == 0 && cr[i] > CRMaisAlto)
        {

            CRMaisAlto = cr[i];
            int j = 0;
            while (matricula[i][j] != '\0')
            {
                alunaComCRMaisAlto[j] = matricula[i][j];
                j++;
            }
            alunaComCRMaisAlto[j] = '\0';
        }
    }

    // Verificando se uma aluna foi encontrada e imprimindo os resultados
    if (CRMaisAlto != -1)
    {
        printf("A aluna com o CR mais alto no curso %d é %s com um CR de %d.\n", codBuscado, alunaComCRMaisAlto, CRMaisAlto);
    }
    else
    {
        printf("Nenhuma aluna encontrada no curso %d.\n", codBuscado);
    }
}
}