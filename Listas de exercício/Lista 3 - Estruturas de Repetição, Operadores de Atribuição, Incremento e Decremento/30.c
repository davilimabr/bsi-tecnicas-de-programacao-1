/*Leia um número n e m e imprima um retângulo de asteriscos de n x m (n > 0 e m > 0)*/

#include<stdio.h>

int main(void){
    int n, m;

    do{
        puts("digite um numero inteiro e positivo");
        scanf("%d", &n);
    }while(n < 1);
   
    do{
        puts("digite outro numero inteiro e positivo");
        scanf("%d", &m);
    }while(n < 1);

    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++)
            printf("* ");
        
        printf("\n");
    }
}
