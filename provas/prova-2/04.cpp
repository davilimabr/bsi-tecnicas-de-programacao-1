/*Criar uma função, responsável por embaralhar uma string com a seguinte assinatura:

void embaralha(char string[], char string_embaralhada[])

utilizando a função já pronta:

int aleatorio(int min, int max)

que devolve um número aleatório, entre dois valores passados por parâmetro.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int aleatorio(int min, int max){
    return  min + (rand() % max);
}

void embaralhaString(char cadeia[], char embaralhada[]){
    strcpy(embaralhada, cadeia);
    for(int i = 0; i < strlen(cadeia);){
        int j = aleatorio(0, strlen(cadeia));

        if(j != i){
            char temp = embaralhada[i];
            embaralhada[i] = embaralhada[j];
            embaralhada[j] = temp;
            i++;
        }
    }
}

int main(void){
    const int TAMANHO_STR = 100;

    char string[TAMANHO_STR] = "davi lima";
    char stringEmbaralhada[TAMANHO_STR];

    embaralhaString(string, stringEmbaralhada);

    puts(stringEmbaralhada);
}
