/*17. Leia um vetor v de 10 inteiros e imprima os números que aparecem mais de uma vez em v.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int vetor[10];
    int i, j;

    for(i = 0; i < 10; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    int count;
    bool ja_apareceu;
    for(i = 0; i < 10; i++){
        count = 0;
        ja_apareceu = false;

        for(j = i; j < 10; j++)
            if(vetor[i] == vetor[j])
                count++;
        
        if(count > 1){
            if(i > 0)
                for(j = i - 1;j >= 0; j--)
                    if(vetor[i] == vetor[j])
                        ja_apareceu = true;

            if(!ja_apareceu)
                printf("%d\n", vetor[i]);
        }
    }
}