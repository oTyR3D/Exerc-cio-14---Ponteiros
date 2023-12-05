#include <stdio.h>

int main()
{
    int inteiro = 10;
    float real = 40.0;
    char letra = 'A';

    // Associe as variáveis aos ponteiros (use &).
    int *ponteiro1 = &inteiro;
    float *ponteiro2 = &real;
    char *ponteiro3 = &letra;

    printf("Valor do inteiro: %d\n", inteiro);
    printf("Valor do real: %f\n", real);
    printf("Valor do char: %c\n", letra);

    *ponteiro1 = 40;
    *ponteiro2 = 10.0;
    *ponteiro3 = 'B';

    printf("Novo valor do inteiro: %d\n", inteiro);
    printf("Novo valor do real: %f\n", real);
    printf("Novo valor do char: %c\n", letra);

    return 0;
}