#include <stdio.h>

void trocaConteudo(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    printf("Antes da troca - Valor 1: %d\tValor 2: %d\n", valor1, valor2);

    trocaConteudo(&valor1, &valor2);

    printf("Após a troca - Valor 1: %d\tValor 2: %d\n", valor1, valor2);

    return 0;
}
