/*Leia um vetor v de 10 inteiros e gere outro vetor w contendo os elementos de v ao quadrado.
Imprima w.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num[10], quadrado[10];

    int i;
    for(i = 0; i < 10; i++){
        printf("Digite o numero %d\n", i+1);
        scanf("%d", &num[i]);

        quadrado[i] = num[i] * num[i];
    }

    system("cls");

    for(i = 0; i < 10; i++)
        printf("%d\n", quadrado[i]);
}