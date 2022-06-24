/*Leia uma string s e um caracter c. Em seguida, remova todas as ocorrências do caracter c da string s
e imprima s. Exemplo:
s: Programacao
c: a
Progrmco*/

#include<stdio.h>
#include<string.h>

int main(void){
    char string[100];
    char c1;

    puts("digite uma string");
    gets(string);
    
    puts("digite uma string");
    c1 = getchar();

    int i, j;
    for(i = 1; i <= strlen(string);)
        if(string[i] == c1)
        {
            for(j = i+1; j <= strlen(string); j++)
                string[j-1] = string[j];    
        }
        else i++;

    puts(string);
}