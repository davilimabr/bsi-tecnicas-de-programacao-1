#include <stdio.h>

int soma(int n)
{
    if (n == 0)
        return 0;

    return n + soma(n-1);
}

int main()
{
    int n;

    printf("N: ");
    scanf("%d", &n);

    printf("Soma de 1 a %d: %d\n", n, soma(n));
}
