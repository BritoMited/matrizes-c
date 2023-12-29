/*Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos marcados com x.*/

#include <stdio.h>

int main()
{

    int m[5][5], i, j, sum = 0;

    for (i = 0; i < 2; i++)
    {
        for (i = 0; j < 2; j++)
        {
            printf("matriz[%d][%d]", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("[%d]", m[i][j]);
            sum += m[i][j];
        }
        printf("\n");
    }
    printf("%d ", sum);
    return 0;
}