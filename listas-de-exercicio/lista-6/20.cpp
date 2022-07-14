/*Implemente a função

int conta_letras(char str[])

que retorna a quantidade de letras (a..z ou A..Z) da string str.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int conta_letras(char str[]){
    int letras = 0;

    for(int i = 0; i < strlen(str); i++)
        if(isalpha(str[i]))
            letras++;

    return letras;
}

int main(void){
    char string[100];

    puts("digite um texto");
    gets(string);

    printf("quantidade de letras do texto: %d", conta_letras(string));
}