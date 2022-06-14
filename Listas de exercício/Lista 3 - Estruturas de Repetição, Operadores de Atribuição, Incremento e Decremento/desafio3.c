/*Leia um número n e imprima um losango de asteriscos com largura n (n deve ser ímpar e n >= 3).
Exemplo: n = 5.

    *
   ***
  *****
   ***
    *

*/

#include<stdio.h>
#include<math.h>

int main(void){
    int num;

    do{
        puts("digite um numero inteiro e positivo, respectivamente");
        scanf("%d", &num);
    }while(num < 3 || num % 2 == 0);

    int i, j, aux, meio;
    
    meio = num / 2 + 1;
    for(i = 1; i <= num; i++){
        if(i <= meio)
            aux = meio - i; // aux = quanto falta pra chegar na linha do meio
        else
            aux = i - meio;

        for(j = 1; j < aux + 1;j++)
            printf(" ");

        for(j = aux + 1; j <= num - aux ; j++)
            printf("*");

        for(j = num - aux; j < num;j++)
            printf(" ");

        printf("\n");
    }
}