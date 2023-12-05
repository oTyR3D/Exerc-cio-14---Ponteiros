#include <stdio.h>

void calcularSoma(int *a, int b)
{
    *a = *a + b;
}

int main()
{
    int valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    printf("Valores iniciais: a = %d, b = %d\n", valor1, valor2);

    calcularSoma(&valor1, valor2);

    printf("Após a soma, o valor de A é: %d\n", valor1);
    printf("O valor de B permanece inalterado: %d\n", valor2);

    return 0;
}
