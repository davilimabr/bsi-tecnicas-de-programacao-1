/*Leia uma string msg e imprima-a como um diamante, iniciando com o caracter central e, a cada
linha, imprima os dois caracteres faltantes nas duas extremidades. Após imprimir a string
completa, realize a operação inversa, até imprimir somente o caracter central. Exemplo:
Entrada:
FELIZ ANIVERSARIO
Saída:
        I
       NIV
      ANIVE
      ANIVER
    Z ANIVERS
   IZ ANIVERSA
  LIZ ANIVERSAR
 ELIZ ANIVERSARI
FELIZ ANIVERSARIO
 ELIZ ANIVERSARI
  LIZ ANIVERSAR
   IZ ANIVERSA
    Z ANIVERS
      ANIVER
      ANIVE
       NIV
        I
        */

#include<stdio.h>
#include<string.h>

int main(void){
    char string[100];

    puts("digite uma string");
    gets(string);

    int i, j, aux, meio, len = strlen(string);
    meio = len / 2;

    for(i = 0; i <= len; i++){
        if(i <= meio)
            aux = meio - i; // aux = quanto falta pra chegar na linha do meio
        else
            aux = i - meio;

        for(j = 0; j < aux; j++)
            printf(" ");

        for(j = aux; j < len - aux ; j++)
            printf("%c", string[j]);

        for(j = len - aux; j < len; j++)
            printf(" ");

        printf("\n");
    }
}