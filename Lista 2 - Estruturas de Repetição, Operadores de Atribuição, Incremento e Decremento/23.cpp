/*Leia uma temperatura e a escala (C-Celsius ou F- Fahrenheit) e converta-a para a outra escala. Ou
seja, se o usuário informar a temperatura em Celsius esta deverá convertida para Fahrenheit e vice-
versa.*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char escala;
    float temperatura;

    puts("Informe a temperatura e a escala");
    
    puts("Temperatura:");
    scanf("%f", &temperatura);

    do{
        puts("Escala (c - Celsius | f - Fahrenheit)");
        getchar(); // para limpar o buffer
        escala = getchar();

    }while(escala != 'c' && escala != 'f');
    
    if(escala == 'c'){
        float f = 32 + ((float)(212 - 32)) / 100 * temperatura;
        printf("A temperatura %.2f em Celsius, equivale a %.2f em Fahrenheit", temperatura, f);
    }       
    else{
        float c = (temperatura - 32) * 100 / (212 - 32);
        printf("A temperatura %.2f em Fahrenheit, equivale a %.2f em Celsius", temperatura, c);

    }
}