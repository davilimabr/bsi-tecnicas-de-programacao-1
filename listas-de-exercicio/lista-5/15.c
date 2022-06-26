/*Leia uma string s1 e um número inteiro n (n > 0). Em seguida, gere a string s2 com os n primeiros
caracteres de s1 e imprima s2.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

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

    int i;
    for(i = 0; i < num; i++)
        str2[i] = str1[i];

    str2[num] = '\0';
            
    puts(str2);
}