//Leia um número inteiro n (n >= 0) e informe quantos dígitos ele tem.

#include<stdio.h>
#include<math.h>

int main(void){
    int num, digitos = 0;

    do{
        scanf("%d", &num);
    }while(num < 0);

    long int aux = num;
    while(true){
        if(aux < 1)
            break;
        else 
            digitos++;

        aux /= 10;
    }

    printf("%d", digitos);
}