/*Leia duas strings s1 e s2 e uma posição p (p >= 0). Em seguida, insira a string s2 na string s1 na
posição p e imprima s1. Caso a posição p seja inválida, apresente uma mensagem de erro.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char str1[100];
    char str2[100];
    int posicao;

    puts("digite uma string");
    gets(str1);
    
    puts("digite uma string");
    gets(str2);

    do{
        puts("digite uma posicao para inserir a segunda string na primeira");
        scanf("%d", &posicao);
    }while(posicao < 0);

    if(posicao > strlen(str1) - 1)
        return;
    
    int i, j;
    for(i = strlen(str1) ; i >= posicao ; i--)
        str1[i + strlen(str2)] = str1[i];
    
    for(i = posicao, j = 0 ; j < strlen(str2); i++, j++)
        str1[i] = str2[j];
            
    puts(str1);
}