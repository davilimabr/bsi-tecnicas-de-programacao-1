//Leia 10 valores, um de cada vez, e conte quantos deles estão no intervalo [10, 20] e quantos deles
//estão fora do intervalo. Ao final, imprima estas informações.

#include<stdio.h>

int main(int){
    int num, fora, dentro;
    fora = dentro = 0;

    int i;
    for(i = 0; i < 10; i++){
        printf("digite o %d numero\n", i + 1);
        scanf("%d", &num);

        if(num > 10 && num < 20)
            dentro++;
        else
            fora++;
    }
    printf("fora do intervalo: %d\n dentro do intervalo: %d", fora, dentro);
}