/*Leia um número n e teste: se n for negativo, eleve n ao quadrado; caso contrário, calcule a raiz
quadrada de n. Ao final, imprima o resultado*/

#include<stdio.h>
#include<math.h>

int main(void){
    int numero;

    scanf("%d", &numero);

    if(numero < 0)
        numero *= numero;
    else
        numero = sqrt(numero);

    printf("%d", numero); 
}