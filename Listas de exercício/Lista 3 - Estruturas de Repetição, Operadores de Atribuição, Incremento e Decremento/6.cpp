//Percorra os números de 1000 a 1999 e imprima aqueles que, quando divididos por 11 dão resto
//igual a 5

#include<stdio.h>

int main(int){
    int i;
    for(i = 1000; i < 2000; i++)
        if(i % 11 == 5)
            printf("%d\n", i);
}