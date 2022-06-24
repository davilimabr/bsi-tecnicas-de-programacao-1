/*Leia uma string s e inteiros i e j e imprima o segmento de s de i até j. Não imprima nada se i ou j
forem inválidos.*/

#include<stdio.h>
#include<string.h>

int main(void){
    char string[100];
    int p1, p2;

    puts("digite uma string s");
    gets(string);
   
    puts("digite a posicao de onde deve comecar a substring");
    scanf("%d", &p1);    

    puts("digite a posicao de onde deve terminar a substring");
    scanf("%d", &p2);    

    int i;
    for(i = p1; i <= p2; i++)
        printf("%c", string[i]);    
}