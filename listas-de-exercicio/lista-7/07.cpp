#include <stdio.h>

int mod(int x, int y)
{
    if (x < y)
        return x;

    if (x == y)
        return 0;

    return mod(x-y, y);
}

int main()
{
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    printf("mod(%d, %d) = %d\n", x, y, mod(x, y));
}
