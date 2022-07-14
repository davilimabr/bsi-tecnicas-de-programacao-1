/*Implemente a função

int retira_caracter(char str[], char c)

que remove todas as ocorrências do caracter c da string str.*/

#include<stdio.h>
#include<string.h>

void retira_caracter(char str[], char c){
    int tam = strlen(str);
    
    for(int i = 0; i <= tam;)
        if(str[i] == c){
            for(int j = i; j <= tam-1; j++)
                str[j] = str[j+1];
            tam--;
        }
        else i++;
}
int main(void){
    char string[100];

    puts("digite um texto");
    gets(string);

    puts("digite um caracter");
    char c = getchar();

    retira_caracter(string, c);
    puts(string);
}