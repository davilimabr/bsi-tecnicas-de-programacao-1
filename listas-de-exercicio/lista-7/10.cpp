#include <stdio.h>

int inverte(int n, int k)
{
    if (n == 0)
        return k;

    k = k * 10 + n % 10;

    return inverte(n/10, k);
}


int inverte(int n)
{
    return inverte(n, 0);
}

int main()
{
    int n;

    printf("N: ");
    scanf("%d", &n);

    printf("%d invertido = %d\n", n, inverte(n));
}
