/*Leia dois números n e k e informe se n é divisível por k.*/

#include<stdio.h>

int main(void){
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if(num1 % num2 == 0)
        printf("%d e divisivel por %d", num1, num2);
    else
        printf("%d NAO e divisivel por %d", num1, num2);

}