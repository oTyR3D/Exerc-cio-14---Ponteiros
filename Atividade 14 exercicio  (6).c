#include <stdio.h>

int dobraSomaValor(int *a, int *b)
{
    *a = *a * 2;
    *b = *b * 2;

    return (*a + *b);
}

int main()
{
    int valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    printf("Valores iniciais:\n");
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);

    int resultado = dobraSomaValor(&valor1, &valor2);

    printf("A soma do dobro dos valores é: %d\n", resultado);

    printf("Novos valores:\n");
    printf("Novo valor de A: %d\n", valor1);
    printf("Novo valor de B: %d\n", valor2);

    return 0;
}
