/*Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
apresente na tela o menor valor da matriz, o maior valor da matriz, a soma dos valores da matriz e a
média dos valores da matriz.
*/

#include <stdio.h>

int main()
{

    int i, j, maior, menor, soma, media, matriz[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

    maior = menor = matriz[0][0];
    soma = media = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
            }
            if (menor > matriz[i][j])
            {
                menor = matriz[i][j];
            }
            soma += matriz[i][j];
        }
    }

    media = soma / 25;

    printf("maior: [%d] menor: [%d]\n", maior, menor);
    printf("a soma de todos os valores deu: [%d] e a media e de: [%d]\n", soma, media);

    return 0;
}