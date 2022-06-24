/*Leia uma string s e imprima o número de caracteres dessa string. Não use a função strlen.*/

#include<stdio.h>

int main(void){
    char string[100];

    puts("digite uma string");
    gets(string);

    int tamanho = 0;
    while(string[++tamanho] != '\0');

    printf("O numero de caracteres da string e: %d", tamanho);
}