/*Implemente a função

bool colide_esfera(float x1, float y1, float r1,float x2, float y2, float r2)

que retorna true se a esfera 1 de centro (x1, y1) e raio r1 está em posição de colisão com a esfera 2
de centro (x2, y2) e raio r2, ou false, caso contrário.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool colide_circulo(float x1, float y1, float r1,float x2, float y2, float r2){
    return sqrt( pow( x1 - x2, 2 ) + pow(y1 - y2, 2) ) <= r1 + r2;
}

int main(void){
    float p1[2], r1, p2[2], r2;

    puts("digite as coordenadas de um ponto, correspondente ao centro de um circulo");
    scanf("%f", &p1[0]);
    scanf("%f", &p1[1]);

    puts("digite o raio desse circulo");
    scanf("%f", &r1);
    
    system("cls");

    puts("digite as coordenadas de outro ponto, correspondente ao centro de outro circulo");
    scanf("%f", &p2[0]);
    scanf("%f", &p2[1]);

    puts("digite o raio desse circulo");
    scanf("%f", &r2);

    system("cls");

    if(colide_circulo(p1[0], p1[1], r1, p2[0], p2[1], r2))
        puts("os circulos colidem");
    else
        puts("os circulos NAO colidem");
}

 
