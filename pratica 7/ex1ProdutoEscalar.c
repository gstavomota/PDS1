/*
Escreva um programa em C que recebe dois arranjos de números 
reais  e  e a dimensão  dos dois arranjos e que retorna o 
produto escalar de  e . O produto escalar de dois arranjos é 
dado pela seguinte expressão: 

u*v = u0*v0 + u1*v1 + ... + un *vn

Assuma que  é menor que o número máximo de elementos do 
arranjo (por exemplo, 100). Para testar, preencha cada vetor 
com um único valor.
*/
#define MAX_TAM 3
#include <stdio.h>

void digitaNumeros(float arranjo[]){

    for(int i = 0; i < MAX_TAM; i++){
        scanf("%f",&arranjo[i]);
    }
}

float produtoEscalar(float a1[], float a2[]){
    float produto = 0;
    for(int i = 0; i < MAX_TAM; i++){
        produto = produto + (a1[i]*a2[i]);
    }
    return produto;
}

void main(){
    float arranjo1[MAX_TAM], arranjo2[MAX_TAM], produto[MAX_TAM];

    printf("Digite %d numeros para o arranjo 1: \n",MAX_TAM);
    digitaNumeros(arranjo1);
    printf("Digite %d numeros para o arranjo 2: \n",MAX_TAM);
    digitaNumeros(arranjo2);

    printf("\nProduto escalar: %f",produtoEscalar(arranjo1, arranjo2));

}