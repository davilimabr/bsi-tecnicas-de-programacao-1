/*Leia um vetor v de 10 inteiros e imprima os números pares de trás para frente.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num[10];

    int i;
    for(i = 0; i < 10; i++){
        printf("digite o numero %d\n", i + 1);
        scanf("%d", &num[i]);
    }

    system("cls");
    
    for(i = 10; i > 0; i--)
        if(num[i] % 2 == 0)
            printf("%d\n", num[i]);
    
}
