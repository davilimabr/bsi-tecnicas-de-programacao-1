/*
Criar função para calcular media de notas de um aluno.
Criar função para ordenar uma lista de alunos com base na média deles de forma decrescente.

partindo da seguinte estrutura:

const int QTD_ALUNOS = 100;
const int QTD_NOTAS = 5;
struct Aluno{
    char Nome[30];
    float Notas[QTD_NOTAS];
};

*/

#include<stdio.h>

const int QTD_ALUNOS = 100;
const int QTD_NOTAS = 5;

struct Aluno{
    char Nome[30];
    float Notas[QTD_NOTAS];
};

float calcularMediaAluno(Aluno aluno){
    float soma = 0;

    for(int i = 0; i < QTD_NOTAS; i++)
        soma += aluno.Notas[i];

    return soma / QTD_NOTAS;
}

void ordenarAlunosPorMedia(Aluno alunos[]){
    for(int i = 0; i < QTD_ALUNOS-1;)
        if(calcularMediaAluno(alunos[i]) < calcularMediaAluno(alunos[i+1])){
            Aluno temp = alunos[i];
            alunos[i] = alunos[i+1];
            alunos[i+1] = temp;

            if(i>0)
                i--;
        }
        else i++;
}

int main(void){
    Aluno teste[QTD_ALUNOS] =
    {
        {"a1",  {10,2,8,9,4}}    ,
        {"a2",  {5,7,8,6,4}}     ,
        {"a3",  {8.5,9.5,1,5,7}} ,
        {"a4",  {2.5,2.5,1,5,6}} ,
        {"a5",  {3.5,3.5,1,5,6}} ,
        {"a6",  {4.5,4.5,1,5,6}} ,
        {"a7",  {6.5,5.5,1,5,5}} ,
        {"a8",  {7.5,6.5,1,5,4}} ,
        {"a9",  {8.5,7.5,1,5,3}} ,
        {"a10", {9.5,8.5,1,5,3}} ,
        {"a11", {1.5,1.5,1,5,2}} ,
        {"a12", {9.7,9.5,1,5,2}}};

    ordenarAlunosPorMedia(teste);

    for(int i = 0; i < QTD_ALUNOS; i++)
        printf("%s\n", teste[i].Nome);
}