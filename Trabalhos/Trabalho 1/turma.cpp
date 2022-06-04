#include<stdio.h>
#include<stdio.h>
#include <stdlib.h>

int main(void){
    int qtd_alunos_A, qtd_alunos_B;
    int i, j; //contadores

    //entrada de valores turma a
    while(true){
        puts("Insira a quantidade de alunos da turma A:");
        scanf("%d", &qtd_alunos_A);

        if(qtd_alunos_A <= 0)
            printf("A quantidade de alunos deve ser maior que zero. Digite novamente.\n");
        else break;
    }

    int alunos_A[qtd_alunos_A];
    for(i = 0; i < qtd_alunos_A; i++){
        while(true){
            printf("Digite a matricula do aluno %d (6 digitos)\n", i+1);
            scanf("%d", &alunos_A[i]);

            if(alunos_A[i] < 0 || alunos_A[i] < 100000 || alunos_A[i] > 999999)
                printf("O numero e inválido ou possui menos ou mais de 6 digitos. Digite novamente.\n");
            else break;
        }        
    }

    system("cls");
    //entrada de valores turma b
    while(true){
        puts("Insira a quantidade de alunos da turma B:");
        scanf("%d", &qtd_alunos_B);

        if(qtd_alunos_B <= 0)
            printf("A quantidade de alunos deve ser maior que zero. Digite novamente.\n");
        else break;
    }

    int alunos_B[qtd_alunos_B];
    for(i = 0; i < qtd_alunos_B; i++){
        while(true){
            printf("Digite a matricula do aluno %d (6 digitos)\n", i+1);
            scanf("%d", &alunos_B[i]);

            if(alunos_B[i] < 0 || alunos_B[i] < 100000 || alunos_B[i] > 999999)
                printf("O numero e inválido ou possui menos ou mais de 6 digitos. Digite novamente.\n");
            else break;
        }
    }

    system("cls");
    //mostrar resultados
    puts("Alunos presentes em ambas as turmas:\n");
    for(i = 0; i < qtd_alunos_A; i++){
        for(j = 0; j < qtd_alunos_B; j++){
            if(alunos_A[i] == alunos_B[j]){
                printf("%d\n", alunos_A[i]);
                break;
            }
        }
    }

    printf("\n\nAlunos presentes somente na turma A:\n");
    for(i = 0; i < qtd_alunos_A; i++){
        bool soA = true;
        for(j = 0; j < qtd_alunos_B; j++){
            if(alunos_A[i] == alunos_B[j])
                soA = false;
        }
        if(soA)
            printf("%d\n", alunos_A[i]);
    }

    puts("\n\nAlunos presentes somente na turma B:\n");
    for(i = 0; i < qtd_alunos_B; i++){
        bool soB = true;
        for(j = 0; j < qtd_alunos_A; j++){
            if(alunos_B[i] == alunos_A[j])
                soB = false;
        }
        if(soB)
            printf("%d\n", alunos_B[i]);
    }
}