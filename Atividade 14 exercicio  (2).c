#include <stdio.h>

int main()
{
    int x;
    int y;

    if (&x > &y)
    {
        printf("O maior endereco e: %p\n", (void*)&x);
    }
    else if (&x < &y)
    {
        printf("O maior endereco e: %p\n", (void*)&y);
    }

    return 0;
}
