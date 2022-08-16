#include <stdio.h>
#include <string.h>

const int MAX_AGENDA = 10;
const int MAX_LEN = 30;
const int MAX_TEL = 15;

struct Entrada {
    char nome[MAX_LEN];
    char endereco[MAX_LEN];
    char telefone[MAX_TEL];
};

int le_agenda(Entrada agenda[], int max) {
    int qtd = 0;
    char nome[MAX_LEN];
    bool fim = false;

    do {
        printf("Nome: ");
        gets(nome);

        if (strlen(nome) != 0) {
            strcpy(agenda[qtd].nome, nome);

            printf("Endereco: ");
            gets(agenda[qtd].endereco);

            printf("Telefone: ");
            gets(agenda[qtd].telefone);

            qtd++;
        }
        else
            fim = true;

    } while (! fim && qtd < max);

    return qtd;
}

void ordena_agenda(Entrada agenda[], int tam) {
    bool trocou = true;

    for (int k = tam-1; k > 0 && trocou; k--)
    {
        trocou = false;
        for (int i = 0; i < k; i++)
            if (strcmp(agenda[i].nome, agenda[i+1].nome) > 0) {
                Entrada e = agenda[i];
                agenda[i] = agenda[i+1];
                agenda[i+1] = e;
                trocou = true;
            }
    }
}

void imprime_agenda(Entrada agenda[], int tam) {
    puts("Nome                           Endereco                              Telefone");
    puts("-----------------------------------------------------------------------------");
    for (int i = 0; i < tam; i++)
        printf("%-30s %-30s %15s\n",
               agenda[i].nome, agenda[i].endereco, agenda[i].telefone);
}

int main() {
    int qtd_entradas;
    Entrada agenda[MAX_AGENDA];

    qtd_entradas = le_agenda(agenda, MAX_AGENDA);

    ordena_agenda(agenda, qtd_entradas);

    imprime_agenda(agenda, qtd_entradas);
}
