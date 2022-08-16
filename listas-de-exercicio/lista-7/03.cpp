#include <stdio.h>

int multiplica(int a, int b)
{
    int d;

    if (a < 0)
    {
        d = -1;
        a = -a;
    }
    else
        d = 1;

    if (a == 0)
        return 0;
    else if (a == 1)
        return b;

    return d * (b + multiplica(a-1, b));
}

int main()
{
    int a, b;

    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    printf("%d x %d = %d\n", a, b, multiplica(a, b));
}
