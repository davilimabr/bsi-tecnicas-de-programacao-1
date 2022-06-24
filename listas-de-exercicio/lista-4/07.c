/*Leia um vetor v de 10 inteiros. Em seguida, imprima os números de v colocando a letra 'p' ao lado
do maior par e a letra 'i' ao lado do maior ímpar.*/

#include<stdio.h>

int main(void){
    int num[10], maiorP, maiorI;

    int i;
    for(i = 0; i < 10; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d" , &num[i]);

        if(i == 0)
            maiorP = maiorI = 0;

        if(num[i] % 2 == 0){
            if(num[i] > maiorP)
                maiorP = num[i];
        }
        else{
            if(num[i] > maiorI)
                maiorI = num[i];
        }
    }

    for(i = 0; i < 10; i++){
        if(num[i] == maiorP)
            printf("%d - P\n", num[i]);
        else if(num[i] == maiorI)
            printf("%d - I\n", num[i]);
        else 
            printf("%d\n", num[i]);
    }
}