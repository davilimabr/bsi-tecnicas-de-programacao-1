#include <stdio.h>

const int MAX_DATA = 10;

struct Data {
    int dia;
    int mes;
    int ano;
};

int le_datas(Data datas[], int max) {
    int qtd = 0, d, m, a;
    bool fim = false;

    do {
        printf("Dia: ");
        scanf("%d", &d);

        if (d != 0) {
            datas[qtd].dia = d;

            printf("Mes: ");
            scanf("%d", &datas[qtd].mes);

            printf("Ano: ");
            scanf("%d", &datas[qtd].ano);

            qtd++;
        }
        else
            fim = true;

    } while (! fim && qtd < max);

    return qtd;
}

void ordena_datas(Data datas[], int tam) {
    bool trocou = true;

    for (int k = tam-1; k > 0 && trocou; k--)
    {
        trocou = false;
        for (int i = 0; i < k; i++)
            if (datas[i].ano > datas[i+1].ano ||
                (datas[i].ano == datas[i+1].ano && datas[i].mes > datas[i+1].mes) ||
                (datas[i].ano == datas[i+1].ano && datas[i].mes == datas[i+1].mes && datas[i].dia > datas[i+1].dia)) {
                Data dt = datas[i];
                datas[i] = datas[i+1];
                datas[i+1] = dt;
                trocou = true;
            }
    }
}

void imprime_datas(Data datas[], int tam) {
    for (int i = 0; i < tam; i++)
        printf("%02d/%02d/%4d\n", datas[i].dia, datas[i].mes, datas[i].ano);
}

int main() {
    int qtd_data;
    Data datas[MAX_DATA];

    qtd_data = le_datas(datas, MAX_DATA);

    ordena_datas(datas, qtd_data);

    imprime_datas(datas, qtd_data);
}
