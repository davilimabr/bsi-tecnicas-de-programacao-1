#include <stdio.h>

void hanoi(int discos, int origem, int destino, int auxiliar)
{
    if (discos == 1)
        printf("Mover disco de %d para %d\n", origem, destino);
    else
    {
        hanoi(discos-1, origem, auxiliar, destino);
        printf("Mover disco de %d para %d\n", origem, destino);
        hanoi(discos-1, auxiliar, destino, origem);
    }
}

int main()
{
    int n;

    printf("Quantidade de discos: ");
    scanf("%d", &n);

    hanoi(n, 1, 3, 2);
}
