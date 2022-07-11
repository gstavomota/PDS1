/*
Escreva uma função em C que recebe um vetor de números reais v
e número de elementos n armazenados em v e que retorna a média
dos n elementos armazenados em v. O vetor deve ser preenchido
com números aleatórios através de uma outra função. Para 
gerar números aleatórios, use a função drand48() no Linux, 
ou a função rand() no Windows, da biblioteca stdlib.h.
*/
#define MAX_TAM 128

#include <stdio.h>
#include <stdlib.h>

float media(int n){
    float v[n],soma=0;

    for(int i =0; i <n; i++){
        v[i] = rand()%10;
        printf("%f- ", v[i]);
        soma = soma + v[i];
    }

    return soma/n;

}

void main(){
    int num;

    printf("Numero de elementos do vetor: ");
    scanf("%d",&num);

    printf("\nMEDIA: %f",media(num));
}