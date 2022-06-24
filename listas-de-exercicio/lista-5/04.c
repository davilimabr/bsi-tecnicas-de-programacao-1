/*Leia uma string s e converta as letras minúsculas para maiúscula. Dica: subtraia 32 dos caracteres
cujo código ASCII está entre 97 e 122 ('a'..'z').*/

#include<stdio.h>
#include<string.h>

int main(void){
    char string[100];

    puts("digite uma string");
    gets(string);

    int i;
    for(i = 0; i < strlen(string); i++){
        int aux = (int)string[i];
        if(aux >= 97 && aux <= 122)
            string[i] = (char)(aux - 32);
    }

    puts(string);
}