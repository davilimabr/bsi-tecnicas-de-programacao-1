#include <stdio.h>

int conta_ocorrencias(int n, int k)
{
    int c;

    if (n == 0)
        return 0;

    if (n % 10 == k)
        c = 1;
    else
        c = 0;

    return c + conta_ocorrencias(n/10, k);
}

int main()
{
    int n, k;

    printf("N: ");
    scanf("%d", &n);

    printf("K: ");
    scanf("%d", &k);

    printf("%d aparece %d vez(es) em %d\n", k, conta_ocorrencias(n, k), n);
}
