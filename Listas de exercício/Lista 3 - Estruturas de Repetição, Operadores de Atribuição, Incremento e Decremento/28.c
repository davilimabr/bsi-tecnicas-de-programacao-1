/*Imprima a tabuada de multiplicação de 1 até 10 de forma tabular.*/

#include<stdio.h>

int main(void){
    int i, j;

    for(i = 1; i <= 10; i++){
        printf("%d:", i);
        for(j = 1; j <= 10; j++){
            printf("%d", i * j);

            if(j != 10)
                printf(" - ");
        }
        printf("\n");
    }
}