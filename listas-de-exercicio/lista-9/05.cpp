#include <stdio.h>
#include <math.h>

struct Parcela {
    float base;
    int exp;
};

void le_equacao(Parcela equacao[], int parcelas) {
    for (int i = 0; i < parcelas; i++) {
        printf("Parcela %d\n", i+1);
        printf("  Base: ");
        scanf("%f", &equacao[i].base);
        printf("  Expoente: ");
        scanf("%d", &equacao[i].exp);
    }
}


void ordena_equacao(Parcela equacao[], int parcelas) {
    bool trocou = true;

    for (int k = parcelas-1; k > 0 && trocou; k--)
    {
        trocou = false;
        for (int i = 0; i < k; i++)
            if (equacao[i].exp < equacao[i+1].exp) {
                Parcela p = equacao[i];
                equacao[i] = equacao[i+1];
                equacao[i+1] = p;
                trocou = true;
            }
    }
}

void imprime_equacao(Parcela equacao[], int parcelas) {
    for (int i = 0; i < parcelas; i++) {
        if (i != 0 && equacao[i].base > 0)
            printf(" + ");
        else if (equacao[i].base < 0)
            printf(" - ");

        float base = equacao[i].base > 0 ? equacao[i].base : -equacao[i].base;

        if (equacao[i].exp > 1)
            printf("%.1fx ^ %d", base, equacao[i].exp);
        else if (equacao[i].exp == 1)
            printf("%.1fx", base);
        else
            printf("%.1f", base);
    }
}

float resolve_equacao(Parcela equacao[], int parcelas, float x) {
    float r = 0;

    for (int i = 0; i < parcelas; i++)
        r += equacao[i].base * pow(x, equacao[i].exp);

    return r;
}

int main() {
    int n;
    float x, r;

    printf("Qtd de parcelas: ");
    scanf("%d", &n);

    Parcela equacao[n];

    le_equacao(equacao, n);

    printf("X: ");
    scanf("%f", &x);

    ordena_equacao(equacao, n);

    imprime_equacao(equacao, n);

    r = resolve_equacao(equacao, n, x);

    printf(" = %f\n", r);
}
