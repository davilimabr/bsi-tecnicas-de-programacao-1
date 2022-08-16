#include <stdio.h>

int soma_digitos(int n)
{
    if (n == 0)
        return 0;

    return 1 + soma_digitos(n/10);
}

int main()
{
    int n;

    printf("N: ");
    scanf("%d", &n);

    printf("Soma dos digitos de %d = %d\n", n, soma_digitos(n));
}
