/*5. Leia uma string s e um caracter c e imprima a posição de c em s; ou -1, caso c não pertença a s.*/
/*6. Leia uma string s e um caracter c e imprima o número de ocorrências de c em s.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    char c, string[100];

    puts("digite uma string");
    gets(string);

    puts("digite um caracter");
    c = getchar();

    int i, j = 0,  posicao[strlen(string)];

    for(i = 0; i <= strlen(string); i++)
        if(string[i] == c)
            posicao[j++] = i;

    printf("quantidade de ocorrencias de \"%c\" em \"%s\": %d\n", c, string, j);

    if(j == 0)
        puts("-1");
    else{
        printf("posicao:");
        
        for(i = 0; i < j; i++)
            printf("%d ", posicao[i]);
    }    
}