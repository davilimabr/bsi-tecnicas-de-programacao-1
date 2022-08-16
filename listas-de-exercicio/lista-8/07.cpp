#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX_LEN = 30;
const int MAX_ALUNOS = 30;

struct Aluno {
    int matricula;
    char nome[MAX_LEN];
    float nota1;
    float nota2;
    float nota3;
};

float le_nota(char msg[]) {
    float nota;

    do {
        printf(msg);
        scanf("%f", &nota);

        if (nota != -1 && (nota < 0 || nota > 10))
            puts("Nota invalida");
    } while (nota != -1 && (nota < 0 || nota > 10));

    return nota;

}

int le_dados_alunos(Aluno alunos[], int max) {
    int qtd = 0;
    bool fim = false;

    do {
        printf("Aluno %d\n", qtd+1);

        printf(" Matricula: ");
        scanf("%d", &alunos[qtd].matricula);

        getchar(); // Limpa o ENTER

        if (alunos[qtd].matricula != 0) {
            printf(" Nome: ");
            gets(alunos[qtd].nome);

            alunos[qtd].nota1 = le_nota(" Nota 1: ");
            alunos[qtd].nota2 = le_nota(" Nota 2: ");
            alunos[qtd].nota3 = le_nota(" Nota 3: ");

            qtd++;
        }
        else
            fim = true;
    } while (! fim && qtd < max);

    return qtd;
}

float calcula_media(Aluno aluno) {

    if (aluno.nota1 == -1 && aluno.nota2 == -1 && aluno.nota3 == -1)
        return 0;
    else if (aluno.nota1 == -1 && aluno.nota2 == -1)
        return aluno.nota3/2;
    else if (aluno.nota1 == -1 && aluno.nota3 == -1)
        return aluno.nota2/2;
    else if (aluno.nota2 == -1 && aluno.nota3 == -1)
        return aluno.nota1/2;
   else {
        if (aluno.nota1 > aluno.nota2)
            if (aluno.nota2 > aluno.nota3)
                return (aluno.nota1+aluno.nota2)/2;
            else
                return (aluno.nota1+aluno.nota3)/2;
        else
            if (aluno.nota1 > aluno.nota3)
                return (aluno.nota1+aluno.nota2)/2;
            else
                return (aluno.nota2+aluno.nota3)/2;
   }
}

void imprime_alunos(Aluno alunos[], int tam) {

    puts("----------------------------------------------------------------------------");
    puts("Matricula Nome                              N1    N2    N3  Media   Situacao");
    puts("----------------------------------------------------------------------------");

    for (int i = 0; i < tam; i++) {
        float media = calcula_media(alunos[i]);

        printf(" %06d   %-30s  ", alunos[i].matricula, alunos[i].nome);

        if (alunos[i].nota1 != -1)
            printf("%4.1f  ", alunos[i].nota1);
        else
            printf("   F  ");

        if (alunos[i].nota2 != -1)
            printf("%4.1f  ", alunos[i].nota2);
        else
            printf("   F  ");

        if (alunos[i].nota3 != -1)
            printf("%4.1f   ", alunos[i].nota3);
        else
            printf("   F   ");

        printf("%4.1f  ", media);

        if (media >= 6)
            puts(" APROVADO");
        else
            puts("REPROVADO");
    }
}

int main()
{
    int qtd;
    Aluno alunos[MAX_ALUNOS];

    qtd = le_dados_alunos(alunos, MAX_ALUNOS);

    if (qtd > 0)
        imprime_alunos(alunos, qtd);
}
