#include <stdio.h>

int div(int x, int y)
{
    if (x < 0)
        x = -x;

    if (y < 0)
        y = -y;

    if (x == y)
        return 1;

    if (x < y)
        return 0;

    return 1 + div(x-y, y);
}

int main()
{
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    printf("div(%d, %d) = %d\n", x, y, div(x, y));
}
