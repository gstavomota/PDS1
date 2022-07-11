/*
Faça um programa para ler um vetor X de n elementos e gerar um 
outro vetor com esses n elementos em ordem inversa. Exemplo: 
Se X = 3,5,2,8,4 , deverá ser gerado um vetor Y= 4,8,2,5,3. 
O valor de n é lido pelo teclado.
*/
#define MAX_TAM 128
#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int vetor[], int vetorContrario[],int size){
    int j =0;

    for(int i=0; i<size; i++){
        vetor[i] = rand()%10;
        printf("%d ",vetor[i]);
    }
    printf("\n");
    for(int i=size-1; i >= 0; i--){
        vetorContrario[i] = vetor[j];
        j++;
    }
    for(int i=0; i < size; i++){
        printf("%d ",vetorContrario[i]);
    }

}

void main(){
    int n, x[MAX_TAM], y[MAX_TAM];

    scanf("%d",&n);

    preencheVetor(x,y,n);
}