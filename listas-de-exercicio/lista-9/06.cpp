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

int soma_equacao(Parcela eq1[], int p1, Parcela eq2[], int p2, Parcela eq3[]) {
    int k = 0, i = 0, j = 0;

    while (i < p1 && j < p2) {
        if (eq1[i].exp == eq2[j].exp) {
            // Se os expoentes s�o iguais ent�o tenta somar as bases
            // Se as bases se anularem, ent�o pula essa parcela, pois ela n�o vai para eq3
            if (eq1[i].base + eq2[j].base != 0) {
                eq3[k].base = eq1[i].base + eq2[j].base;
                eq3[k].exp = eq1[i].exp;
                k++;
            }
            i++;
            j++;
        }
        else if (eq1[i].exp > eq2[j].exp) {
            // Se eq1 tem o expoente maior, ent�o copia a parcela de eq1 para eq3
            eq3[k].base = eq1[i].base;
            eq3[k].exp = eq1[i].exp;
            i++;
            k++;
        }
        else {
            // Se eq2 tem o expoente maior, ent�o copia a parcela de eq2 para eq3
            eq3[k].base = eq2[j].base;
            eq3[k].exp = eq2[j].exp;
            j++;
            k++;
        }
    }

    // Se ainda ficaram parcela de eq1 sem processar, ent�o copia para eq3
    while (i < p1) {
        eq3[k].base = eq1[i].base;
        eq3[k].exp = eq1[i].exp;
        i++;
        k++;
    }

    // Se ainda ficaram parcela de eq2 sem processar, ent�o copia para eq3
    while (j < p2) {
        eq3[k].base = eq2[j].base;
        eq3[k].exp = eq2[j].exp;
        j++;
        k++;
    }

    return k;
}

int main() {
    int n1, n2, n3;

    printf("Qtd de parcelas da equacao 1: ");
    scanf("%d", &n1);

    Parcela eq1[n1];

    le_equacao(eq1, n1);

    printf("Qtd de parcelas da equacao 2: ");
    scanf("%d", &n2);

    Parcela eq2[n2];

    le_equacao(eq2, n2);

    ordena_equacao(eq1, n1);
    ordena_equacao(eq2, n2);

    Parcela eq3[n1+n2];

    n3 = soma_equacao(eq1, n1, eq2, n2, eq3);

    imprime_equacao(eq3, n3);
}
