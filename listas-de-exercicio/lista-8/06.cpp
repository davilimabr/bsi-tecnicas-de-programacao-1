#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX_LEN = 30;

struct Produto {
    int codigo;
    char nome[MAX_LEN];
    float preco_unitario;
    int qtd;
};

struct Pedido {
    int numero;
    int codigo;
    int qtd;
};

void le_dados_produtos(Produto produtos[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Produto %d\n", i+1);

        printf(" Codigo: ");
        scanf("%d", &produtos[i].codigo);

        getchar(); // Limpa o ENTER

        printf(" Nome: ");
        gets(produtos[i].nome);

        printf(" Preco unitario: ");
        scanf("%f", &produtos[i].preco_unitario);

        printf(" Quantidade: ");
        scanf("%d", &produtos[i].qtd);
    }
}

void le_dados_pedidos(Pedido pedidos[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Pedido %d\n", i+1);

        printf(" Numero: ");
        scanf("%d", &pedidos[i].numero);

        printf(" Codigo: ");
        scanf("%d", &pedidos[i].codigo);

        printf(" Quantidade: ");
        scanf("%d", &pedidos[i].qtd);
    }
}

int busca_produto(Produto produtos[], int tam, int codigo) {
    for (int i = 0; i < tam; i++)
        if (produtos[i].codigo == codigo)
            return i;

    return -1;
}

void atende_pedidos(Produto produtos[], int tam_prod, Pedido pedidos[], int tam_ped) {
    float pagar, faturado = 0;

    puts("-----------------------------------------------------------------------");
    puts("Pedido Codigo Qtd Nome                               Situacao     Pagar");
    puts("-----------------------------------------------------------------------");

    for (int i = 0; i < tam_ped; i++) {
        int p = busca_produto(produtos, tam_prod, pedidos[i].codigo);

        printf("%06d %06d %3d ", pedidos[i].numero, pedidos[i].codigo, pedidos[i].qtd);

        if (p == -1) {
            puts("                                 Nao existe         -");
        }
        else if (produtos[p].qtd < pedidos[i].qtd) {
            printf("%-30s  Sem estoque         -\n", produtos[p].nome);
        }
        else {
            pagar = pedidos[i].qtd * produtos[p].preco_unitario;

            printf("%-30s     Atendido  %8.2f\n", produtos[p].nome, pagar);

            faturado += pagar;
            produtos[p].qtd -= pedidos[i].qtd;
        }
    }
    puts("-----------------------------------------------------------------------");
    printf("Total faturado: R$ %10.2f\n", faturado);
}

int main()
{
    int qtd_prod, qtd_ped;

    printf("Qtd de produtos: ");
    scanf("%d", &qtd_prod);

    Produto produtos[qtd_prod];

    le_dados_produtos(produtos, qtd_prod);

    printf("Qtd de pedidos: ");
    scanf("%d", &qtd_ped);

    Pedido pedidos[qtd_ped];

    le_dados_pedidos(pedidos, qtd_ped);

    atende_pedidos(produtos, qtd_prod, pedidos, qtd_ped);
}
