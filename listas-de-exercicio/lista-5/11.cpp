/*Leia duas strings s1 e s2 e calcule a posição da string s2 na string s1. Se não existir imprima -1.
Ignore a diferença de maiúsculas e minúsculas. Exemplo:
s1 = "Sistemas de Informacao"
s2 = "info"
posição = 12*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char str1[100];
    char str2[100];

    puts("digite uma string");
    gets(str1);
    
    puts("digite uma string");
    gets(str2);

    bool igual;
    int i, j, k, posicao = -1;
    
    for(i = 0; i < strlen(str1); i++)
        str1[i] = towlower(str1[i]);

    for(i = 0; i < strlen(str2); i++)
        str2[i] = towlower(str2[i]);

    for(i = 0; i < strlen(str1); i++){
        igual = true;

        for(j = i, k = 0; j < strlen(str2) + i; j++, k++)
            if(str1[j] != str2[k]){
                igual = false;
                break;
            }

        if(igual){
            posicao = i; 
            break;
        }
    }

    printf("s1: %s\n", str1);
    printf("s2: %s\n", str2);
    printf("posicao: %d", posicao);
}


