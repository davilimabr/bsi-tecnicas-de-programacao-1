/*
Leia um número n e imprima um trapézio de asteriscos com base n (n > 0). Exemplo: n = 4.
*
* *
* * *
* * * *
*/

#include<stdio.h>

int main(void){
    int n;

    do{
        puts("digite um numero inteiro e positivo");
        scanf("%d", &n);
    }while(n < 1);

    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++)
            printf("* ");
        
        printf("\n");
    }
}