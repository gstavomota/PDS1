/*
Implementar uma função que recebe como parâmetro o raio de um círculo
e retorne a área do círculo correspondente. A área do círculo é , 
sendo que . Protótipo:

float areaCirculo(float raio);
*/
#include <stdio.h>
#include <math.h>

#define PI 3.141592

float areaCirculo(float raio){
    return PI*(pow(raio,2));
}

void main(){

    float raio;
    printf("raio: ");
    scanf("%f",&raio);

    printf("Area: %f",areaCirculo(raio));
}