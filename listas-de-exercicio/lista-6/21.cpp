/*Implemente a função

void retira_caracter(char str[], char c, char resultado[])

que remove todas as ocorrências do caracter c da string str e armazena a nova string em resultado.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void retira_caracter(char str[], char c, char resultado[]){
    for(int i = 0, j = 0; i <= strlen(str); i++)
        if(str[i] != c || str[i] == '\0')
            resultado[j++] = str[i];
}

int main(void){
    char string[100];

    puts("digite um texto");
    gets(string);

    puts("digite um caracter");
    char c = getchar();

    char string_sem_c[100];
    retira_caracter(string, c, string_sem_c);

    printf("texto sem as ocorrencias de \"%c\"\n", c);
    puts(string_sem_c);
}