#include <stdio.h>

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Endereço da posição [%d][%d]: %p\n", i, j, (void *)&matriz[i][j]);
        }
    }

    return 0;
}
