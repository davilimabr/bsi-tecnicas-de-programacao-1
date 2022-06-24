/*Leia uma string s e imprima suas vogais e, em seguida, suas consoantes.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){
    char string[100];

    puts("digite uma string");
    gets(string);

    int i;
    puts("vogais");
    for(i = 0; i <= strlen(string); i++){
        char aux = tolower(string[i]);
        if( aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u'){
            printf("%c", aux);
            
            if(i < strlen(string))
                printf(" ");
        }
    }

    puts("\nconsoantes");
    for(i = 0; i <= strlen(string); i++){
        char aux = tolower(string[i]);
        if( aux != 'a' && aux != 'e' && aux != 'i' && aux != 'o' && aux != 'u'){
            printf("%c", aux);
        
            if(i < strlen(string))
                printf(" ");
        }
    }
}