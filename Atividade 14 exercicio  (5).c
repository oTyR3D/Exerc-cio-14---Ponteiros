#include <stdio.h>

void ordenaValores(int *a, int *b)
{
    if (*a > *b)
    {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main()
{
    int valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    ordenaValores(&valor1, &valor2);

    printf("Maior valor: %d\n", valor1);
    printf("Menor valor: %d\n", valor2);

    return 0;
}
