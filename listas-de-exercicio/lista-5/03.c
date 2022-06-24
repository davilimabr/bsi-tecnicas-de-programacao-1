/*Leia uma string s e converta as letras maiúsculas em minúsculas. Dica: some 32 aos caracteres cujo
código ASCII está entre 65 e 90 ('A'..'Z').*/

#include<stdio.h>
#include<string.h>

int main(void){
    char string[100];

    puts("digite uma string");
    gets(string);

    int i;
    for(i = 0; i <= strlen(string); i++){
        int aux = (int)string[i];
        if(aux >= 65 && aux <= 90)
            string[i] = (char)(aux + 32);
    }

    puts(string);
}