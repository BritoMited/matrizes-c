/*Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e, utilizando estruturas
de repetição, apresente na tela a soma de todos os elementos da matriz.*/
#include <stdio.h>

int main()
{

    int matriz[2][3], i, j, soma = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    printf("a soma de tudo e: %d", soma);
    return 0;
}