/*Leia duas sequências com n dígitos (0 a 9), que devem ser interpretadas como dois números
inteiros de n algarismos. Calcule a sequência de dígitos que representa a soma dos dois inteiros.
Exemplo: n = 8
1a sequência      8 2 4 3 4 2 5 1
2a sequência    + 3 3 7 5 2 3 3 7
                -------------------
                1 1 6 1 8 6 5 8 8
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int qtd_seq;
    int i, j;
    
    printf("digite a quantidade de numeros das sequencias > ");
    scanf("%d", &qtd_seq);

    int seq1[qtd_seq], seq2[qtd_seq];

    puts("sequencia 1");
    for(i = 0; i < qtd_seq;){
        printf("(%d)> ", i+1);
        scanf("%d", &seq1[i]);

        if(seq1[i] >= 0 && seq1[i] <=9)
            i++;
    }

    system("cls");
    puts("sequencia 2");
    for(i = 0; i < qtd_seq;){
        printf("(%d)> ", i+1);
        scanf("%d", &seq2[i]);

        if(seq2[i] >= 0 && seq2[i] <=9)
            i++;
    }

    bool passou = false;
    int result[qtd_seq+1], casa_ant = 0;

    for(i = qtd_seq-1; i >= 0; i--){
        result[i+1] = seq1[i] + seq2[i] + casa_ant;
        casa_ant = 0;

        if(result[i+1] > 9){
            result[i+1] -= 10;
            
            if(i == 0){
                result[i] = 1;
                passou = true;
            }
            else
                casa_ant = 1;
        }
    }

    
    system("cls");
    printf("  ");
    for(i = 0; i < qtd_seq; i++)
        printf("%d ", seq1[i]);

    printf("\n");

    
    printf("+ ");
    for(i = 0; i < qtd_seq; i++)
        printf("%d ", seq2[i]);

    printf("\n");

    if(passou)
        i = 0;
    else{
        i = 1;
        printf("  ");
    }

    for(; i < qtd_seq +1; i++)
        printf("%d ", result[i]);
}
    