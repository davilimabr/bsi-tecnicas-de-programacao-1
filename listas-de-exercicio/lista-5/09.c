/*Leia uma string s e elimine seus espaços em branco "supérfluos", ou seja, reduza uma sequência de
dois ou mais espaços em branco para apenas um espaço em branco. Exemplo:
"Essa   cadeia possui   vários  espaços   supérfluos" → "Essa cadeia possui vários espaços supérfluos"*/

#include<stdio.h>
#include<string.h>

int main(void){
    char string[100];

    puts("digite uma string");
    gets(string);

    int i, j;
    for(i = 1; i <= strlen(string);)
        if(string[i] == ' ' && string[i-1] == ' ')
        {
            for(j = i+1; j <= strlen(string); j++)
                string[j-1] = string[j];    
        }
        else i++;

    puts(string);
}