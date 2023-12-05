#include <stdio.h>

void dobraArray(int *array, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *(array + i) *= 2;
    }
}

int main()
{
    int n[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(n) / sizeof(n[0]);

    printf("Números do array:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", n[i]);
    }

    dobraArray(n, tamanho);

    printf("Dobro dos números:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}
