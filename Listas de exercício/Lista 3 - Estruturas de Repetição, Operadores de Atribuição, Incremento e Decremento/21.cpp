//Leia os números inteiros n, k e r. Em seguida, imprima os k termos de uma PA que inicia em n e
//tem razão r.

#include<stdio.h>

int main(void){
    int k;
    float n, r;

    puts("Insira os números inteiros n, k e r, de uma PA de k termos que inicia em n e tem razão r.");
    scanf("%f %d %f", &n, &k, &r);

    int i;
    float termo = n;
    for(i = 0; i < k; i++, termo += r){
        printf("(%d)   - %.2f\n", i+1, termo);
    }
}