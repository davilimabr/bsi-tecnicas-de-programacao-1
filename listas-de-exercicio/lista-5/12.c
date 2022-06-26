/*Leia duas strings s1 e s2 gere a string s3 como resultado da intercalação de s1 com s2. Imprima s3.*/

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

    int i, j, k;
    for(i = j = k = 0; i <= strlen(str3); i++){
        if(i % 2 == 0)
            str3[i] = str1[j++];
        else 
            str3[i] = str2[k++];
    }
    puts(str3);
}