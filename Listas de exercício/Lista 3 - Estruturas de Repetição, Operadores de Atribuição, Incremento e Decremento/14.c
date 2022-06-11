//Leia vários números positivos até o usuário digitar zero e, para cada número, imprima a sua raiz
//quadrada ou uma mensagem de erro, caso não seja possível calculá-la.

#include<stdio.h>
#include<math.h>

int main(void){
    int num = 1;

    while(num != 0){
        scanf("%d", &num);
 
        float raiz = sqrt(num);
        int raiz_int = raiz;

        if(num > 0 && raiz == raiz_int)
            printf("raiz: %d\n", raiz_int);
        else
            printf("impossivel calcular raiz ou valor impreciso\n");
    }
}