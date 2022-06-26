/*Leia uma string s, uma posição p (p > 0) e um valor n (n > 0). Em seguida, remova n caracteres da
string s a partir da posição p e imprima s.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char str1[100];
    char str2[100];
    int posicao, num;

    puts("digite uma string");
    gets(str1);
    
    do{
        puts("digite a posicao da substring");
        scanf("%d", &posicao);
        
        puts("digite o numero de caracteres da substring");
        scanf("%d", &num);
    }while(num <= 0 || num <= 0);

    int i, j;
    for(i = posicao, j = 0 ; i < posicao + num; i++, j++)
        str2[j] = str1[i];

    str2[j] = '\0';

    puts(str2);
}