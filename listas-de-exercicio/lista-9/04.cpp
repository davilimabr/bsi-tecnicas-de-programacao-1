#include <stdio.h>
#include <string.h>

const int TAM_VET = 10;

void le_vetor(int v[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
}

void ordena_vetor(int v[], int tam) {
    bool trocou = true;

    for (int k = tam-1; k > 0 && trocou; k--)
    {
        trocou = false;
        for (int i = 0; i < k; i++)
            if (v[i] > v[i+1]) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = true;
            }
    }
}

void imprime_estatistica(int v[], int tam) {
    int num_vezes = 0, ultimo;

    for (int i = 0; i < tam; i++) {
        if (i == 0) {
            ultimo = v[0];
            num_vezes = 1;
        }
        else if (v[i] != ultimo) {
            printf("%d: %dx\n", ultimo, num_vezes);
            ultimo = v[i];
            num_vezes = 1;
        }
        else
            num_vezes++;
    }

    if (num_vezes > 0)
        printf("%d: %dx\n", ultimo, num_vezes);
}

int main() {
    int vetor[TAM_VET];

    le_vetor(vetor, TAM_VET);

    ordena_vetor(vetor, TAM_VET);

    imprime_estatistica(vetor, TAM_VET);
}
