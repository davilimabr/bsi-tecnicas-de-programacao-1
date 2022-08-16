#include <stdio.h>

void le_vetor(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Digite um no.: ");
        scanf("%d", &v[i]);
    }
}

void imprime_vetor(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%d ", v[i]);

    putchar('\n');
}

void inverte(int v[], int esq, int dir)
{
    int temp;

    if (esq >= dir)
        return;

    temp = v[esq];
    v[esq] = v[dir];
    v[dir] = temp;

    inverte(v, esq+1, dir-1);
}

int main()
{
    int t;

    printf("Tamanho do vetor: ");
    scanf("%d", &t);

    int v[t];

    le_vetor(v, t);

    inverte(v, 0, t-1);

    puts("Vetor invertido");
    imprime_vetor(v, t);
}
