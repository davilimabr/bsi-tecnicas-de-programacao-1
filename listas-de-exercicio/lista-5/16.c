/*Leia uma string s1 e um número inteiro n (n > 0). Em seguida, gere a string s2 com os n últimos
caracteres de s1 e imprima s2.*/

#include<stdio.h>
#include<string.h>

int main(void){
    char str1[100];
    char str2[100];
    int num;

    puts("digite uma string");
    gets(str1);
    
    do{
        puts("digite um numero");
        scanf("%d", &num);
    }while(num <= 0);

    int i, j;
    for(i = strlen(str1) - num, j = 0 ; i <= strlen(str1); i++, j++)
        str2[j] = str1[i];

    puts(str2);
}