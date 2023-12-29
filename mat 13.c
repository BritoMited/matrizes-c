/*Escreva um programa que leia uma matriz M de 4 x 5 elementos e, utilizando uma estrutura de
repetição, armazene em um vetor V o menor elemento de cada linha da matriz. Exemplo:

 Matriz M preenchida

 0 1 2 3 4
 +-----+-----+-----+-----+-----+
0 | 5 | 4 | 2 | 8 | 7 |
 +-----+-----+-----+-----+-----+
1 | 3 | 6 | 9 | 1 | 4 |
 +-----+-----+-----+-----+-----+
2 | 0 | 3 | 5 | 2 | 9 |
 +-----+-----+-----+-----+-----+
3 | 4 | 9 | 7 | 6 | 2 |
 +-----+-----+-----+-----+-----+
 Vetor V preenchido
 0 1 2 3
+-----+-----+-----+-----+
| 2 | 1 | 0 | 2 |
+-----+-----+-----+-----+*/

int main()
{

    int m[4][5] = {{1, 2, 3, 4, 5}, {7, 8, 9, 1, 0}, {1, 1, 2, 1, 3}, {4, 2, 1, 2, 3}},
        i, j, v[4], menor;

    for (i = 0; i < 4; i++)
    {
        menor = m[i][0];
        for (j = 0; j < 5; j++)
        {
            if (menor > m[i][j])
            {
                menor = m[i][j];
            }
        }
        v[i] = menor;
    }
    for (i = 0; i < 4; i++)
    {
        printf("[%d]", v[i]);
    }

    return 0;
}