/*Uma escola tem 5 turmas e cada turma tem n alunos. Faça um programa que leia as notas dos
alunos de uma turma e imprima a média da turma e o total de alunos da turma com nota superior ou
igual a 7,0. Ao final, imprima a média geral da escola. Notas inválidas não devem ser consideradas.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int qtd_alunos, qtd_alunos_sete, qtd_alunos_total;
    float notas, notas_total, media;
    int i;

    qtd_alunos_total = notas_total = 0;
    qtd_alunos = 1;

    int countT = 0;
    while(countT < 5){
        printf("turma %d\n", countT+1);
        puts("digite a quantidade de alunos presentes nessa turma\n");
        scanf("%d", &qtd_alunos);

        qtd_alunos_total += qtd_alunos;
        
        notas = 0;
        qtd_alunos_sete = 0;

        float nt_aux;
        for(i = 0; i < qtd_alunos; i++){
            printf("digite a nota do aluno %d\n", i+1);
            scanf("%f", &nt_aux);

            if(nt_aux >= 0)
                notas += nt_aux;
            if(nt_aux >= 7)
                qtd_alunos_sete++;    
        }
        notas_total += notas;
        media = notas / qtd_alunos;

        printf("media dos alunos: %.2f\nquantidade de alunos com nota maior ou igual a 7: %d\n\n", media, qtd_alunos_sete);

        countT++;
    }

    media = notas_total / qtd_alunos_total;
    printf("media de todos alunos da escola: %.2f", media);
}
