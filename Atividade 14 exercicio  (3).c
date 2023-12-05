#include <stdio.h>

int main()
{
    int x, y;

    printf("Digite o valor da variavel x: ");
    scanf("%d", &x);

    printf("Digite o valor da variavel y: ");
    scanf("%d", &y);

    printf("O endereco da variavel x e: %p\n", (void*)&x);
    printf("O endereco da variavel y e: %p\n", (void*)&y);

    if (&x > &y)
    {
        printf("O conteudo do maior endereco (variavel x) e: %d\n", x);
    }
    else
    {
        printf("O conteudo do maior endereco (variavel y) e: %d\n", y);
    }

    return 0;
}
