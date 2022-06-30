#include <stdio.h>

void troca(float *end_valor1, float *end_valor2){
    float armazena;
    armazena = *end_valor1;
    *end_valor1 = *end_valor2;
    *end_valor2 = armazena;
}

void letraA(){

    float v1 = 5, v2 = 22;

    troca(&v1, &v2);

    printf("V1: %f\nV2: %f", v1, v2);
}

void main(){

    float x,y;

    scanf("%f %f", &x, &y);
	
    troca(&x, &y);
    
	printf("\nx = %f\ny = %f", x, y);
}
