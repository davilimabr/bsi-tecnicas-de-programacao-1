/*Reescreva o exercício anterior com o comando switch*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    int nota;

    puts("Insira a nota");
    scanf("%d", &nota);

    if(nota > 10 || nota < 0){
        puts("inválida");
        return 0;
    }

    switch(nota){
        case 10:
        case 9:
            puts("conceito A");
            break; 
        case 8:
        case 7:
            puts("conceito B");
            break; 
        case 6:
        case 5:
            puts("conceito C");
            break;
        default: 
            puts("conceito D");
            break;
    }
}