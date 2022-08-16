#include <stdio.h>

const int MAX_DATA_HORA = 10;

struct DataHora {
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
    int segundo;
};

int le_data_hora(DataHora dh[], int max) {
    int qtd = 0, d, m, a;
    bool fim = false;

    do {
        printf("Dia: ");
        scanf("%d", &d);

        if (d != 0) {
            dh[qtd].dia = d;

            printf("Mes: ");
            scanf("%d", &dh[qtd].mes);

            printf("Ano: ");
            scanf("%d", &dh[qtd].ano);

            printf("Hora: ");
            scanf("%d", &dh[qtd].hora);

            printf("Minuto: ");
            scanf("%d", &dh[qtd].minuto);

            printf("Segundo: ");
            scanf("%d", &dh[qtd].segundo);

            qtd++;
        }
        else
            fim = true;

    } while (! fim && qtd < max);

    return qtd;
}

void ordena_dh(DataHora dh[], int tam) {
    bool trocou = true;

    for (int k = tam-1; k > 0 && trocou; k--)
    {
        trocou = false;
        for (int i = 0; i < k; i++)
            if (dh[i].ano > dh[i+1].ano ||
               (dh[i].ano == dh[i+1].ano && dh[i].mes > dh[i+1].mes) ||
               (dh[i].ano == dh[i+1].ano && dh[i].mes == dh[i+1].mes && dh[i].dia > dh[i+1].dia) ||
               (dh[i].ano == dh[i+1].ano && dh[i].mes == dh[i+1].mes && dh[i].dia == dh[i+1].dia && dh[i].hora > dh[i+1].hora) ||
               (dh[i].ano == dh[i+1].ano && dh[i].mes == dh[i+1].mes && dh[i].dia == dh[i+1].dia && dh[i].hora == dh[i+1].hora && dh[i].minuto > dh[i+1].minuto) ||
               (dh[i].ano == dh[i+1].ano && dh[i].mes == dh[i+1].mes && dh[i].dia == dh[i+1].dia && dh[i].hora == dh[i+1].hora && dh[i].minuto == dh[i+1].minuto && dh[i].segundo > dh[i+1].segundo)) {
                DataHora dt = dh[i];
                dh[i] = dh[i+1];
                dh[i+1] = dt;
                trocou = true;
            }
    }
}

void imprime_dh(DataHora dh[], int tam) {
    for (int i = 0; i < tam; i++)
        printf("%02d/%02d/%4d %02d:%02d:%02d\n",
               dh[i].dia, dh[i].mes, dh[i].ano,
               dh[i].hora, dh[i].minuto, dh[i].segundo);
}

int main() {
    int qtd_data;
    DataHora dh[MAX_DATA_HORA];

    qtd_data = le_data_hora(dh, MAX_DATA_HORA);

    ordena_dh(dh, qtd_data);

    imprime_dh(dh, qtd_data);
}
