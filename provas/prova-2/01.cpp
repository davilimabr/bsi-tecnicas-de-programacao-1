/*
Criar função para separar alunos que possuem notas entre dentro de um invervalo x, com a seguinte assinatura:

int selecionar_alunos(Aluno alunos[], int qtd_alunos, float min, float max , Aluno alunos_selecionados)

na qual o retorno deve ser a quantidade de alunos selecionados.

Criar tbm a struct Aluno, que deve ter nome e nota. 
*/
#include<stdio.h>

const int QTD_NOME = 30; 

struct Aluno{
    char Nome[QTD_NOME];
    float Nota;
};

int selecionar_alunos(Aluno alunos[], int qtd_alunos, float min, float max, Aluno alunos_selecionados[]){
    int count = 0;

    for(int i = 0; i < qtd_alunos; i++)
        if(alunos[i].Nota >= min && alunos[i].Nota <= max)
            alunos_selecionados[count++] = alunos[i];

    return count;
}

int main(void){
    int qtd_teste = 5;
    Aluno teste[qtd_teste] = {{"davi", 7.8}, {"carlos", 8.2}, {"pedro", 6.62}, {"carlos", 4.1}, {"joaquin", 5.1}};

    Aluno selecionados[qtd_teste];

    int qtd_selecionados = selecionar_alunos(teste, qtd_teste, 5, 8, selecionados);

    for(int i = 0; i < qtd_selecionados; i++)
        printf("%s\n", selecionados[i].Nome);
}

