/*Leia uma string s informe se s é palíndroma ou não. Para a verificação devem ser consideradas
somente as letras de A a Z. Um palíndromo é uma palavra ou frase, que é igual quando lida da
esquerda para a direita ou da direita para a esquerda (espaços em brancos e pontuação devem ser
descartados). Assuma que as palavras não tem acentos.
Exemplos:
Anotaram a data da maratona
A cara rajada da jararaca
A grama é amarga
Socorram-me, subi no ônibus em Marrocos!
A torre da derrota*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char string[100];
    char stringaux[100];
    char stringrev[100];

    puts("digite uma string");
    gets(string);

    int i, j;
    for(i = 0, j = 0; i < strlen(string); i++){
        char charaux = tolower(string[i]);
        
        if(isalpha(charaux))
            stringaux[j++] = charaux;
    }

    for(i = strlen(string) - 1, j = 0; i >= 0; i--){
        char charaux = tolower(string[i]);
        
        if(isalpha(charaux))
            stringrev[j++] = charaux;
    }
    
    if(strcmp(stringaux, stringrev) == 0)
        puts("e palindromo");
    else
        puts("nao e palindromo");
}