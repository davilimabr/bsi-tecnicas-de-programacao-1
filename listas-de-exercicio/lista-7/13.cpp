#include <stdio.h>
#include <math.h>

int converte_decimal(int n, int p)
{
    if (n <= 0)
        return 0 ;

    int x = converte_decimal(n / 10, p+1);

    return x + (n%10) * pow(2, p);
}

int converte_decimal(int n)
{
    printf("%d\n", converte_decimal(n, 0));
}

int main()
{
    char resp;
    int n;

    do {
        printf("N: ");
        scanf("%d", &n);

        getchar(); // Remove o ENTER

        puts("Notacao decimal:");
        converte_decimal(n);

        printf("Continua (S/N)? ");
        resp = getchar();
    } while (resp == 's' || resp == 'S');
}
