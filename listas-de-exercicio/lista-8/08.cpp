#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX_EMPRESAS = 10;
const int MAX_FUNC = 20;
const int MAX_RAZAO = 30;
const int MAX_NOME = 30;
const int MAX_CARGO= 20;

struct Funcionario {
    long long cpf;
    char nome[MAX_NOME];
    char cargo[MAX_CARGO];
    float salario;
};

struct Empresa {
    long long cnpj;
    char razao_social[MAX_RAZAO];

    int qtd_func;

    Funcionario funcionarios[MAX_FUNC];
};

int busca_empresa(Empresa empresas[], int tam, long long cnpj) {
    for (int i = 0; i < tam; i++)
        if (empresas[i].cnpj == cnpj)
            return i;

    return -1;
}

void busca_funcionario(Empresa empresas[], int tam, long long cpf, int &pos_empr, int &pos_func) {
    for (int i = 0; i < tam; i++)
        for (int j = 0; j < empresas[i].qtd_func; j++)
            if (empresas[i].funcionarios[j].cpf == cpf) {
                pos_empr = i;
                pos_func = j;
                return;
            }

    pos_empr = -1;
    pos_func = -1;
}

int le_dados_funcionarios(Empresa empresas[], int max) {
    int qtd_empresas = 0;
    int p, pos_empr, pos_func, i = 1;
    long long cnpj, cpf;
    bool fim = false;

    do {
        printf("Dados do Funcionario %d\n", i);

        printf(" CNPJ: ");
        scanf("%lld", &cnpj);

        getchar(); // Limpa o ENTER

        if (cnpj != 0) {

            p = busca_empresa(empresas, qtd_empresas, cnpj);

            if (p == -1) {
                p = qtd_empresas;

                empresas[p].cnpj = cnpj;
                empresas[p].qtd_func = 0;

                printf(" Razao social: ");
                gets(empresas[p].razao_social);

                qtd_empresas++;
            }

            printf(" CPF: ");
            scanf("%lld", &cpf);

            getchar(); // Limpa o ENTER

            busca_funcionario(empresas, qtd_empresas, cpf, pos_empr, pos_func);

            if (pos_func == -1 ) {
                if (empresas[p].qtd_func < MAX_FUNC) {
                    pos_func = empresas[p].qtd_func;

                    empresas[p].funcionarios[pos_func].cpf = cpf;

                    printf(" Nome: ");
                    gets(empresas[p].funcionarios[pos_func].nome);

                    printf(" Cargo: ");
                    gets(empresas[p].funcionarios[pos_func].cargo);

                    printf(" Salario: ");
                    scanf("%f", &empresas[p].funcionarios[pos_func].salario);

                    getchar(); // Limpa o ENTER

                    empresas[p].qtd_func++;

                    i++;
                }
                else
                    printf("Empresa %lld - %s ja atingiu o limite de funcionarios\n",
                           empresas[p].cnpj,
                           empresas[p].razao_social);

            }
            else
                printf("Funcionario ja cadastrado na empresa %lld - %s\n",
                       empresas[pos_empr].cnpj,
                       empresas[pos_empr].razao_social);

        }
        else
            fim = true;
    } while (! fim && qtd_empresas < max);

    return qtd_empresas;
}

void imprime_empresas(Empresa empresas[], int tam) {

    for (int i = 0; i < tam; i++) {
        puts("=========================================================================");
        printf("CNPJ: %lld\nRazao social: %s\nQtd. Func.: %d\n",
               empresas[i].cnpj,
               empresas[i].razao_social,
               empresas[i].qtd_func);
        puts("-------------------------------------------------------------------------");
        puts("CPF         Nome                           Cargo                  Salario");
        puts("-------------------------------------------------------------------------");
        for (int j = 0; j < empresas[i].qtd_func; j++)
            printf("%011lld %-30s %-20s %9.2f\n",
                   empresas[i].funcionarios[j].cpf,
                   empresas[i].funcionarios[j].nome,
                   empresas[i].funcionarios[j].cargo,
                   empresas[i].funcionarios[j].salario);
    }
    puts("=========================================================================");
}

int main()
{
    int qtd;
    Empresa empresas[MAX_EMPRESAS];

    qtd = le_dados_funcionarios(empresas, MAX_EMPRESAS);

    if (qtd > 0)
        imprime_empresas(empresas, qtd);
}
