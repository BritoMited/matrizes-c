/*Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos marcados com x.*/

#include <stdio.h>

int main()
{

    int m[5][5] = {{1, 2, 3, 4, 5}, {7, 8, 9, 1, 0}, {1, 1, 2, 1, 3}, {4, 2, 1, 2, 3}, {5, 6, 7, 8, 9}}, i, j, sum = 0;

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