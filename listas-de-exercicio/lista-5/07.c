/*Leia uma string s e dois caracteres c1 e c2. Em seguida, substitua todas as ocorrências de c1 por c2
na string s e imprima a string resultante.*/

#include<stdio.h>
#include<string.h>

int main(void){
    char string[100];
    char c1, c2;

    puts("digite uma string s");
    gets(string);
   
    puts("digite um caracter presente em s");
    c1 = getchar();
    
    getchar();

    puts("digite um caracter para substituir o digitado anteriormente");
    c2 = getchar();

    int i;
    for(i = 0; i <= strlen(string); i++)
        if(string[i] == c1)
            string[i] = c2;
    
    puts(string);
}