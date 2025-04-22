#include <stdio.h>
#include <stdlib.h>

/*O professor de um curso criou um programa para lançar a lista de presença de suas aulas. Considere que um determinado aluno tenha faltado a primeira aula e assistido as 2 últimas (3 aulas no total). Imprima ‘P’ para cada presença e ‘F’ para cada falta. Os valores devem seguir a ordem das aulas.*/

int main()
{
    char presenca[3] = {'F', 'P', 'P'}; // F para falta, P para presença
    int faltas = 0, presencas = 0;

    // Loop para imprimir a lista de presença e contar faltas e presenças
    for (int i = 0; i < 3; i++)
    {
        printf("%c ", presenca[i]);
        if (presenca[i] == 'F')
        {
            faltas++;
        }
        else if (presenca[i] == 'P')
        {
            presencas++;
        }
    }
    printf("\n");

    // Imprime o total de faltas e presenças
    printf("O aluno teve %d faltas e %d presenças.\n", faltas, presencas);

    return 0;
}