/*Leia as coordenadas dos pontos P1 (x1, y1) e P2 (x2, y2) e calcule a distância entre P1 e P2*/
#include <stdio.h>
#include <math.h>

int main() {
    float p1[2], p2[2], distancia;
    
    puts("ponto 1:");
    scanf("%f %f", &p1[0], &p1[1]);
    
    puts("ponto 2:");
    scanf("%f %f", &p2[0], &p2[1]);
    
    distancia = sqrt( pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2) );
    
    printf("%.2f", distancia);
    
    return 0;
}