/*
Faça um programa que leia 2 vetores X e Y de 10 elementos, 
cada um. Intercale os elementos desses 2 vetores formando assim 
um novo vetor Z de 20 elementos, onde, nas posições ímpares 
de Z, estejam os elementos de X e, nas posições pares, os 
elementos de Y. Exemplo: Se X = 3,5,2,8,4 e Y = 1,7,6,5,2 
ntão Z = 3,1,5,7,2,6,8,5,4,2. Imprimir o vetor Z
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preencheVetorXY(int vetor[]){
    for(int i=0; i<10;i++){
        vetor[i] = rand()%10;
    }
}

void preencheVetorZ(int vetor[],int vetPar[],int vetImpar[]){
    int j=1;
    vetor[0] = vetPar[0];

    for(int i=2; i<20; i+=2){
        vetor[i] = vetPar[j];
        j++;
    }
    j=0;
    for(int i=1; i<20; i+=2){
        vetor[i] = vetImpar[j];
        j++;
    }
}

void main(){

    int x[10], y[10], z[20], j=0;

    preencheVetorXY(x);
    preencheVetorXY(y);
    preencheVetorZ(z, y, x);

    for(int i=0; i<10;i++){
        printf("%d ", x[i]);
    }
    printf("\n");
    for(int i=0; i<10;i++){
        printf("%d ", y[i]);
    }
    printf("\n");
    for(int i=0; i<20;i++){
        printf("%d ", z[i]);
    }
}