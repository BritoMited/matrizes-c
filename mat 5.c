/*Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
apresente na tela a soma de todos os elementos da linha 3 da matriz.
*/

#include <stdio.h>

int main()
{

    int m[5][5] = {{1, 2, 3, 4, 5}, {7, 8, 9, 1, 0}, {1, 1, 2, 1, 3}, {4, 2, 1, 2, 3}, {5, 6, 7, 8, 9}}, i;


    for(i = 0; i < 5;i++){
        printf("[%d]", m[3][i]);
    }

    return 0;
}