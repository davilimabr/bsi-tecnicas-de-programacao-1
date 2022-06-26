/*Leia uma string s1 e gere a string s2 com as mesmas letras de s1 uma posição à frente, ou seja, a/A
vira b/B, b/B vira c/C e z/Z vira a/A. Devem ser consideradas somente as letras de A a Z.
Exemplos:
Lua → Mvb
BOIS → CPJT*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char str1[100];
    char str2[100];
    int num;

    puts("digite uma string");
    gets(str1);
    
    int i;
    for(i = 0; i < strlen(str1); i++){
        if(isalpha(str1[i]) && tolower(str1[i]) != 'z'){
            str2[i] = ++str1[i];
        }
        else
            str2[i] = str1[i];
    }
    str2[i] = '\0';

    puts(str2);
}