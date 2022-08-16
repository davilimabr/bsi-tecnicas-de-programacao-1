#include <stdio.h>

int mdc(int x, int y)
{
    if (x <= 0 || y <= 0)
        return -1;

    if (x == y)
        return x;

    if (x < y)
        return mdc(y, x);

    return mdc(x-y, y);
}

int main()
{
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    printf("mdc(%d, %d) = %d\n", x, y, mdc(x, y));
}
