/*Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros. Em seguida, leia um
número qualquer do teclado e mostre na tela o índice em que o número se encontra na matriz, ou
então a mensagem "Número não encontrado!", se o número não estiver presente na matriz.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int i, j, num, matrix[2][3] = {{2, 4, 6}, {8, 5, 6}};
    bool super_econtrador_master_dois_mil = false;

    printf("col numero que voce quer achar? ");
    scanf("%d", &num);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] == num)
            {
                printf("matriz[%d][%d]", i, j);
                super_econtrador_master_dois_mil = true;
            }
        }
    }
    if (super_econtrador_master_dois_mil == false)
    {
        printf("NAO ENCONTREI XIQUE XIQUE BA");
    }

    return 0;
}