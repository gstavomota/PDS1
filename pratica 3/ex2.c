#include <stdio.h>

void soma1(int *endX){
    *endX = *endX + 1;
}

void letraA(){

    int x = 10;
    float y = 22.2;
    char z = 'b';

    int *pX = &x;
    float *pY = &y;
    char *pZ = &z;

    printf("\nEndereco de x: %d - Valor de x: %d", pX, *pX);
    printf("\nEndereco de y: %d - Valor de y: %f", pY, *pY);
    printf("\nEndereco de z: %d - Valor de z: %c", pZ, *pZ);
}

void letraB(){

    int x = 0;
    int *pX = &x;

    *pX = 3;

    printf("%d", x);
}

void letraC(){

    int x = 12;
    int *pX = &x;

    soma1(pX);
    printf("Resultado: %d", x);
}

void main(){
    int x = 0;
    int *pX = &x;

    soma1(pX);

    printf("%d", x);
}