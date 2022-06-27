/*Leia uma string e imprimi-a como no exemplo abaixo:
Entrada:
AMOR
Saída:
AMOR
AMO
AM
A*/

#include<stdio.h>
#include<string.h>

int main(void){
    char string[100];

    puts("digite uma string");
    gets(string);


    puts("saida");
    int i, j;
    for(i = 0; i < strlen(string); i++){
        for(j = 0 ; j < strlen(string) - i; j++)
            printf("%c", string[j]);

        printf("\n");
    }
}