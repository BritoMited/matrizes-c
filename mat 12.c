/*Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos marcados com x.
. . . x
. . x x
. x x x
x x x x*/

int main()
{

    int m[4][4] = {{1, 2, 3, 4}, {7, 8, 9, 1}, {1, 1, 2, 1}, {4, 2, 1, 2}}, i, j, sum = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 3; j >= 3 - i; j--)
        {
            printf("[%d]", m[i][j]);
            sum += m[i][j];
        }
        printf("\n");
    }
    printf("%d ", sum);
}