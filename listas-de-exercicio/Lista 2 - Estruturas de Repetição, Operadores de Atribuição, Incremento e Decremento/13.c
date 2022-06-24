/*Leia as coordenadas dos pontos P1, P2 e P3. Em seguida, informe se esses pontos formam um 
triângulo ou não. Caso positivo, imprima o perímetro P e a área A do triângulo*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

bool PontosAlinhados(float p1[2], float p2[2], float p3[2]){
    float diagonal_p = (p1[0] * p2[1]) + (p1[1] * p3[0]) + (p2[0] * p3[1]);
    float diagonal_s = (p3[0] * p2[1]) + (p3[1] * p1[0]) + (p2[0] * p1[1]);
    
    if(diagonal_p - diagonal_s == 0)
        return true;
    else return false;
}

int main(void) {
    setlocale(LC_ALL, "");
    
    float p1[2], p2[2], p3[2];

    puts("Digite as coordenadas (x,y) de três pontos diferentes\n");

    puts("Ponto 1:");
    scanf("%f %f", &p1[0], &p1[1]);
    
    puts("Ponto 2:");
    scanf("%f %f", &p2[0], &p2[1]);
    
    puts("Ponto 3:");
    scanf("%f %f", &p3[0], &p3[1]);
    
    if(PontosAlinhados(p1, p2, p3))
    {
         puts("Os pontos NÃO formam um triangulo");
         return 0;
    }
     
    puts("Os pontos formam um triangulo");
     
    float perimetro, area, lados_t[3], p;
    
    lados_t[0] = sqrt( pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2));
    lados_t[1] = sqrt( pow(p3[0] - p2[0], 2) + pow(p3[1] - p2[1], 2));
    lados_t[2] = sqrt( pow(p3[0] - p1[0], 2) + pow(p3[1] - p1[1], 2));
    
    perimetro =  lados_t[0] + lados_t[1] +lados_t[2]; 
    p = perimetro / 2;
    area = sqrt(p * (p-lados_t[0]) * (p-lados_t[1]) * (p-lados_t[2]));
    
    printf("Perímetro : %.2f \n Área: %.2f", perimetro, area);
    return 0;
}


