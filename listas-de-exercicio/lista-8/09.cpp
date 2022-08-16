#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX_LEN = 50;

struct Livro {
    char titulo[MAX_LEN];
    char autor[MAX_LEN];
    int ano;
};

void le_dados_livros(Livro livros[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Livro %d\n", i+1);

        printf(" Titulo: ");
        gets(livros[i].titulo);

        printf(" Autor: ");
        gets(livros[i].autor);

        printf(" Ano: ");
        scanf("%d", &livros[i].ano);

        getchar(); // Limpa o ENTER
    }
}

bool igual(char str1[], char str2[], int ini1, int ini2, int tam) {
    int j = ini2;

    for (int i = ini1; i < ini1+tam; i++, j++)
        if (toupper(str1[i]) != toupper(str2[j]))
            return false;

    return true;
}

bool substring(char str1[], char str2[]) {
    int tam = strlen(str2);

    int limite = strlen(str1) - tam;

    for (int i = 0; i <= limite; i++)
        if (igual(str1, str2, i, 0, tam))
            return true;

    return false;
}

int busca_por_titulo(Livro livros[], int tam, char titulo_buscado[], int posicao[]) {
    int qtd = 0;
    for (int i = 0; i < tam; i++)
        if (substring(livros[i].titulo, titulo_buscado)) {
            posicao[qtd] = i;
            qtd++;
        }

    return qtd;
}

int busca_por_autor(Livro livros[], int tam, char autor[], int posicao[]) {
    int qtd = 0;
    for (int i = 0; i < tam; i++)
        if (substring(livros[i].autor, autor)) {
            posicao[qtd] = i;
            qtd++;
        }

    return qtd;
}

int main()
{
    int qtd, opcao;

    printf("Qtd de livros: ");
    scanf("%d", &qtd);

    getchar();

    if (qtd > 0) {
        Livro livros[qtd];
        int posicao[qtd];
        char cadeia[MAX_LEN];
        int achados;

        le_dados_livros(livros, qtd);

        do {
            puts("\n1-Consulta por titulo");
            puts("2-Consulta por autor");
            puts("3-Fim");
            printf("Opcao: ");
            scanf("%d", &opcao);

            getchar();

            switch(opcao) {
                case 1:
                case 2: 
                        printf("Titulo/Autor: ");
                        gets(cadeia);

                        if (opcao == 1)
                            achados = busca_por_titulo(livros, qtd, cadeia, posicao);
                        else
                            achados = busca_por_autor(livros, qtd, cadeia, posicao);

                        if (achados > 0) {
                                for (int i = 0; i < achados; i++)
                                    printf("Titulo: %s\nAutor: %s\nAno: %d\n",
                                           livros[posicao[i]].titulo,
                                           livros[posicao[i]].autor,
                                           livros[posicao[i]].ano);
                        }
                        else
                            puts("Livro nao encontrado");

                        break;

                case 3: 
                        break;

                default:
                         puts("Opcao invalida");
            }
        } while (opcao != 3);
    }
}
