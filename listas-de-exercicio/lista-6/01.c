#include<stdio.h>
#include<math.h>

void segundo_grau(float a, float b, float c){
    int delta = pow(b,2) - 4 * a * c;
    
    if(delta > 0){
        float x1 = (- b + sqrt(delta)) / (2 * a);     
        float x2 = (- b - sqrt(delta)) / (2 * a);

        printf("raiz 1: %.2f\nraiz 2: %.2f\n", x1, x2);
    }
    else if(delta == 0){
        float x = (- b) / (2 * a);     

        printf("raiz: %.2f\n", x);
    }
    else
        puts("essa fuinção não possui raizes");
}

int main(void){
    float a, b, c;

    puts("digite os valores a, b e c de uma função quadrática, no formato: ax²+bx+c, respectivamente");
    scanf("%f %f %f", &a, &b, &c);

    segundo_grau(a, b, c);
}