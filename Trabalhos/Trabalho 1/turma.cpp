#include<stdio.h>
#include<locale.h>
#include<stdio.h>
#include <stdlib.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int qtd_alunos_A, qtd_alunos_B;
    int *matriculas_A, *matriculas_B;

    do{
        puts("Insira a quantidade de alunos da turma A:");
        scanf("%d", &qtd_alunos_A);
    }while(qtd_alunos_A <= 0);

    matriculas_A = (int *) malloc(qtd_alunos_A * sizeof(int));
    int i;
    for(i = 0; i < qtd_alunos_A; i++){
        printf("Digite a matricula do aluno %d\n", i+1);
        scanf("%d", &matriculas_A[i]);
    }

    do{
        puts("Insira a quantidade de alunos da turma B:");
        scanf("%d", &qtd_alunos_B);
    }while(qtd_alunos_B <= 0);
    
    matriculas_B = (int *) malloc(qtd_alunos_A * sizeof(int));
    for(i = 0; i < qtd_alunos_B; i++){
        printf("Digite a matricula do aluno %d\n", i+1);
        scanf("%d", &matriculas_B[i]);
    }











    int *matriculados_AeB, *matriculados_soA, *matriculados_soB;
    matriculados_soA = (int *) malloc(sizeof(matriculas_A));
    matriculados_soB = (int *) malloc(sizeof(matriculas_B));

    if(qtd_alunos_A > qtd_alunos_B){
        puts("aaaa");
        matriculados_AeB = (int *) malloc(sizeof(matriculas_A));
        
        for (i = 0; i < qtd_alunos_A; i++){
            bool soA = true;
            int j;
            for (j = 0; j < qtd_alunos_B; i++)
                if(matriculas_A[i] == matriculas_B[j]){
                    matriculados_AeB[i] = matriculas_A[i];
                    soA = false;
                    break;
                }
            if(soA)
                matriculados_soA[i] = matriculas_A[i];
        }

        
        for(i = 0 ; i < qtd_alunos_A; i++)
        {
            printf("%d\n", matriculados_AeB[i]);
        }
    }
    else{
        puts("aaaa");
        matriculados_AeB = (int *) malloc(sizeof(matriculas_B));

        for (i = 0; i < qtd_alunos_B; i++){
            bool soB = true;
            int j;
            for (j = 0; j < qtd_alunos_A; i++)
                if(matriculas_B[i] == matriculas_A[j]){
                    matriculados_AeB[i] = matriculas_B[i];
                    soB = false;
                    break;
                }
            if(soB)
                matriculados_soB[i] = matriculas_B[i];
        }

        for(i = 0 ; i < qtd_alunos_B; i++)
        {
            printf("%d\n", matriculados_AeB[i]);
        }
    }

  







    



}
