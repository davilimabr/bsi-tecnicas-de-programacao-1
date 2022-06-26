/*Leia duas strings s1 e s2 gere a string s3 como resultado da concatenação de s1 com s2. Imprima
s3. Não use a função strcat.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char str1[100];
    char str2[100];
    char str3[200];

    puts("digite uma string");
    gets(str1);
    
    puts("digite uma string");
    gets(str2);

    int i, j;
    for(i = 0; i < strlen(str1); i++)
        str3[i] = str1[i];
    
    for(j = 0; j <= strlen(str2); i++, j++)
        str3[i] = str2[j];

    puts(str3);
}