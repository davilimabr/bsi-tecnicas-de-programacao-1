/*Leia uma frase e imprima uma estatística mostrando os caracteres presentes na frase e as
respectivas quantidades. Devem fazer parte da estatística somente as letras (A..Z) e dígitos (0..9).
Letras miúsculas e minúsculas devem ser consideradas iguais. Exemplo:
Entrada:
O exercicio e facil
Saída:
A = 1
C = 3
E = 3
F = 1
I = 3
L = 1
O = 2
R = 1
X = 1*/

#include<stdio.h>
#include<ctype.h>

int main(void){
    char string[100];
    char stringaux[100];

    puts("digite uma string");
    gets(string);

    int i, j;
    for(i = 0, j = 0; i < strlen(string); i++){
        if(isalpha(string[i]))
            stringaux[j++] = tolower(string[i]);
        else if(isdigit(string[i]) == 1)
            stringaux[j++] = string[i];
    }

    for(i = 48; i <= 122; i++){
        int count = 0;

        for(j = 0; j < strlen(stringaux); j++)
            if(stringaux[j] == i){
                count++;
            }
        if(count > 0)
            printf("%c = %d\n", i, count);
        
        if(i == 57)
            i = 97;
    }
}