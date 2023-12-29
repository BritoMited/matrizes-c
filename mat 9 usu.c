/*Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos marcados com x.*/

#include <stdio.h>

int main()
{

    int matriz[5][5], i, j, sum = 0;

    for (i = 0; i < 2; i++)
    {
        for (i = 0; j < 2; j++)
        {
            printf("matriz[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("[%d]", matriz[i][j]);
            sum += matriz[i][j];
        }
        printf("\n");
    }
    printf("%d ", sum);
    return 0;
}