/*
Implementar uma função que recebe como parâmetro uma velocidade em km/h 
(quilômetros por hora) e retorne a mesma convertida para m/s (metros por 
segundo). A fórmula de conversão é , sendo  a velocidade em km/h e  a 
velocidade em m/s. Protótipo:
float paraMetrosPorSegundo(float v);
*/

#include <stdio.h>

float paraMetrosPorSegundo(float v){
    return v/3.6;
}

void main(){
    float kmH;

    printf ("Km/H: ");
    scanf("%f", &kmH);

    printf("\nm/s: %f", paraMetrosPorSegundo(kmH));

}