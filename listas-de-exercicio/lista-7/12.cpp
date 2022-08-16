#include <stdio.h>

void converte_binario(int n)
{
    if (n <= 0)
        return;

    converte_binario(n / 2);

    printf("%d", n % 2);
}

int main()
{
    char resp;
    int n;

    do {
        printf("N: ");
        scanf("%d", &n);

        getchar(); // Remove o ENTER

        puts("Notacao binaria:");
        converte_binario(n);

        printf("\n\nContinua (S/N)? ");
        resp = getchar();
    } while (resp == 's' || resp == 'S');
}
