/*O algoritmo de César é um dos mais antigos e populares e é usado para criptografia de cadeias de
caracteres (strings). Esse algoritmo usa um valor inteiro, chamado chave, e cada caracter da cadeia
de caracteres é substituído por outro caracter à frente, de acordo com o valor da chave, levando-se
em conta a ordem das letras no alfabeto. Por exemplo, se o valor da chave é 3 (três) e a cadeia de
caracteres é “Programacao”, o resultado da criptografia é “Surjudpdfdr”, pois ‘S’ está 3 posições à
frente de ‘P’ e ‘u’ está 3 posições à frente de ‘r’. Caso, o caracter à frente esteja além da letra ‘z’,
deve-se assumir que depois da letra ‘z’ o alfabeto reinicia com a letra ‘a’. Assim, se o valor da
chave é 8 (oito) e a cadeia de caracteres é “Tatu”, o resultado da criptografia é “Bibc”. Da mesma
forma, os dígitos de '0' a '9' devem ser substituídos pelos dígitos à frente, sendo que depois do '9'
reinicia em '0'. Note que deve ser respeitado o fato dos caracteres estarem em caixa baixa ou alta.
Caracteres que não fazem parte do alfabeto regular (letras ‘a’ até ‘z’) ou não são dígitos ('0' a '9')
não devem ser substituídos. Logo, se o valor da chave é 3 (três), a cadeia de caracteres
“Programação C 2020” será criptografada como “Surjudpdçãr F 5353”. Leia uma string msg e uma
chave (inteiro > 0) e imprima a string criptografada de acordo com o algoritmo de César.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char string[100];
    char stringcrip[100];
    int chave;

    puts("digite uma string");
    gets(string);

    puts("digite a chave");
    scanf("%d", &chave);

    int i, j;
    for(i = j = 0; i <= strlen(string); i++){
        int charint = string[i];
        int falta; 

        if(charint >= 65 && charint <= 90){
            if(charint > 90 - chave && charint <= 90){
                falta = 90 - charint;
                stringcrip[j++] = chave + 64 - falta;
            }
            else 
                stringcrip[j++] = charint + chave;
        }
        else if(charint >= 97 && charint <= 122){
            if(charint > 122 - chave && charint <= 122){
                falta = 122 - charint;
                stringcrip[j++] = chave + 96 - falta;
            }
            else
                stringcrip[j++] = charint + chave;
        }
        else if(charint >= 48 && charint <= 57){
                if(charint > 57 - chave && charint <= 57){
                falta = 57 - charint;
                stringcrip[j++] = chave + 47 - falta;
            }
            else
                stringcrip[j++] = charint + chave;
        }
        else 
                stringcrip[j++] = charint ;

    }
    puts(stringcrip);
}
